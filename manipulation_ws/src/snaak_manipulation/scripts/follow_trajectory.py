#!/usr/bin/env python3
import numpy as np
import pickle, time
from frankapy import FrankaArm, SensorDataMessageType
from frankapy.proto_utils import sensor_proto2ros_msg, make_sensor_group_msg
from frankapy.proto import JointPositionSensorMessage, ShouldTerminateSensorMessage

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from snaak_manipulation.action import FollowTrajectory

import os
from ament_index_python.packages import get_package_share_directory
from geometry_msgs.msg import Transform, Vector3, Quaternion
import tf_transformations

class TrajectoryFollowerActionServer(Node):
    def __init__(self):
        super().__init__('trajectory_follower_action_server')
        self._action_server = ActionServer(
            self,
            FollowTrajectory,
            'follow_trajectory',
            self.execute_callback
        )
        self.fa = FrankaArm(init_rclpy=False)

    def execute_callback(self, goal_handle):

        self.get_logger().info("Opening .pkl File...")
        traj_file_path = self.traj_id_to_file(goal_handle.request.traj_id)
        self.get_logger().info(f'The file path you selected is {traj_file_path}')
        self.get_logger().info('Executing Trajectory...')
        self.execute_trajectory(traj_file_path)

        goal_handle.succeed()
        result = FollowTrajectory.Result()
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
            raise Exception("Not a Valid Trajectory ID")
        
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
    trajecty_follower_action_server = TrajectoryFollowerActionServer()
    rclpy.spin(trajecty_follower_action_server)


if __name__ == '__main__':
    main()