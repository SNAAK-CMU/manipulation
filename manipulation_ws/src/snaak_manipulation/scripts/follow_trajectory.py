#!/usr/bin/env python3
import numpy as np
import pickle, time
from frankapy import FrankaArm, SensorDataMessageType
from frankapy.proto_utils import sensor_proto2ros_msg, make_sensor_group_msg
from frankapy.proto import JointPositionSensorMessage, ShouldTerminateSensorMessage

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from snaak_manipulation.action import FollowTrajectory, Pickup

import os
from ament_index_python.packages import get_package_share_directory
from geometry_msgs.msg import Transform, Vector3, Quaternion
import tf_transformations
import logging

class TrajectoryFollowerActionServer(Node): #why not call this manipulation_node
    def __init__(self):
        super().__init__('trajectory_follower_action_server')
        self._action_server = ActionServer(
            self,
            FollowTrajectory,
            'follow_trajectory',
            self.execute_trajectory_callback
        )

        super().__init__('pickup_action_server')
        self._action_server = ActionServer(
            self,
            Pickup,
            'pickup',
            self.execute_pickup_callback
        )

        self.fa = FrankaArm(init_rclpy=False)
    
        self.get_logger().info("Started Manipulation node")



    def execute_trajectory_callback(self, goal_handle):

        self.get_logger().info("Opening .pkl File...")
        traj_file_path = self.traj_id_to_file(goal_handle.request.traj_id)
        
        result = FollowTrajectory.Result()

        if traj_file_path is None or not self.fa.is_skill_done:
            goal_handle.abort()
            return result
        else:
            self.get_logger().info('Executing Trajectory...')
            self.execute_trajectory(traj_file_path)

            pose = self.fa.get_pose()
            transform = Transform()
            transform.translation = Vector3(
                x=pose.translation[0],
                y=pose.translation[1],
                z=pose.translation[2]
            )

            rotation_matrix = pose.rotation
            transformation_matrix = np.eye(4)
            transformation_matrix[:3, :3] = rotation_matrix

            q = tf_transformations.quaternion_from_matrix(transformation_matrix)
            transform.rotation = Quaternion(
                x=q[0],
                y=q[1],
                z=q[2],
                w=q[3]
            )

            goal_handle.succeed()
            result.end_pose = transform
            return result
    
    def execute_pikcup_callback(self, goal_handle):

        # first move to x, y
        # rotate to reset the end effector downwards
        # move down to pick up
        # send service/action call to start vaccuum and wait for response
        # move up

        success = False
        result = Pickup.result()

        try:
            destination_x = goal_handle.request.x
            destination_y = goal_handle.request.y
            depth = goal_handle.request.depth

            # move to x, y
            new_pose = self.fa.get_pose()
            new_pose.translation = [destination_x, destination_y, 0]
            new_pose.rotation = np.identity(3)
            self.fa.goto_pose(new_pose, joint_impedances=[100, 100, 100, 100, 100, 100, 100], use_impedance=True)
            self.get_logger().info("Moving above grasp point...")
            time.sleep(2) # replace this with checking if the robot is out of skill

            # move down
            new_pose = self.fa.get_pose()
            new_pose.translation -= [0, 0, depth]
            new_pose.rotation = np.identity(3)
            self.fa.goto_pose(new_pose, joint_impedances=[100, 100, 100, 100, 100, 100, 100], use_impedance=True)
            self.get_logger().info("Moving Down...")
            time.sleep(2) # replace this with checking if the robot is out of skill

            # call the pneumatic node service
            # self.get_logger("Grasped!")
            
            # move up
            new_pose = self.fa.get_pose()
            new_pose.translation += [0, 0, depth]
            new_pose.rotation = np.identity(3)
            self.fa.goto_pose(new_pose, joint_impedances=[100, 100, 100, 100, 100, 100, 100], use_impedance=True)
            self.get_logger().info("Moving up...")
            time.sleep(2) # replace this with checking if the robot is out of skill

            success=True

        except Exception as e:
            self.get_logger().error(f"Error Occured during pickup motion {e} ")
            success = False
            raise e
        finally:
            result.success = success
            pose = self.fa.get_pose()
            transform = Transform()
            transform.translation = Vector3(
                x=pose.translation[0],
                y=pose.translation[1],
                z=pose.translation[2]
            )

            rotation_matrix = pose.rotation
            transformation_matrix = np.eye(4)
            transformation_matrix[:3, :3] = rotation_matrix

            q = tf_transformations.quaternion_from_matrix(transformation_matrix)
            transform.rotation = Quaternion(
                x=q[0],
                y=q[1],
                z=q[2],
                w=q[3]
            )
            result.end_pose = transform
            return result  

    def traj_id_to_file(self, traj_id):
        package_share_directory = get_package_share_directory('snaak_manipulation')
        pkl_file_name = None
        match traj_id:
            case 0:
                pkl_file_name = "home_assembly_traj.pkl"
            case 1:
                pkl_file_name = "home2bin1_cam_verified.pkl"
            case 2:
                pkl_file_name = "home2bin2_cam_verified.pkl"
            case 3:
                pkl_file_name = "home2bin3_cam_verified.pkl"
        
        if pkl_file_name is None:
            self.get_logger().info('Invalid Trajectory Entered')
            return None
        
        traj_file_path = os.path.join(package_share_directory, pkl_file_name)
        return traj_file_path

    def execute_trajectory(self, traj_file_path):
        with open(traj_file_path, 'rb') as pkl_f:
            skill_data = pickle.load(pkl_f)
        
        assert skill_data[0]['skill_description'] == 'GuideMode', \
            "Trajectory not collected in guide mode"
        skill_state_dict = skill_data[0]['skill_state_dict']

        T = float(skill_state_dict['time_since_skill_started'][-1])
        dt = 0.01

        joints_traj = skill_state_dict['q']


        # Goto the first position in the trajectory.
        #fa.log_info('Initializing Sensor Publisher')

        # go to initial pose if needed, this is more a safety feature, should not be relied on
        self.fa.goto_joints(joints_traj[0])
        self.fa.goto_joints(joints_traj[-1])
        # # To ensure skill doesn't end before completing trajectory, make the buffer time much longer than needed
        # self.fa.goto_joints(joints_traj[1], duration=T, dynamic=True, buffer_time=10)
        # init_time = self.fa.get_time()
        # for i in range(2, len(joints_traj)):
        #     traj_gen_proto_msg = JointPositionSensorMessage(
        #         id=i, timestamp=self.fa.get_time() - init_time, 
        #         joints=joints_traj[i]
        #     )
        #     self.get_logger().info(f'joint angles: {joints_traj[i]}')

        #     ros_msg = make_sensor_group_msg(
        #         trajectory_generator_sensor_msg=sensor_proto2ros_msg(
        #             traj_gen_proto_msg, SensorDataMessageType.JOINT_POSITION)
        #     )
            
        #     #fa.log_info('Publishing: ID {}'.format(traj_gen_proto_msg.id))
        #     self.fa.publish_sensor_data(ros_msg)
        #     time.sleep(dt)
    
        # term_proto_msg = ShouldTerminateSensorMessage(timestamp=self.fa.get_time() - init_time, should_terminate=True)
        # ros_msg = make_sensor_group_msg(
        #     termination_handler_sensor_msg=sensor_proto2ros_msg(
        #         term_proto_msg, SensorDataMessageType.SHOULD_TERMINATE)
        #     )
        # self.fa.publish_sensor_data(ros_msg)
        # self.fa._in_skill = False
        # self.fa.stop_skill()


def main(args=None):
    rclpy.init(args=args)
    trajectory_follower_action_server = TrajectoryFollowerActionServer()
    try:
        rclpy.spin(trajectory_follower_action_server)
    except KeyboardInterrupt:
        pass
    finally:
        trajectory_follower_action_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()