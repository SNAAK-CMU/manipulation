import numpy as np
import argparse

from frankapy import FrankaArm
from frankapy import utils
from record_trajectory import create_formated_skill_dict
import pickle as pkl



# See run_dynamic_joints, may be able to generate trajectory with the different planners, and then record said trajectory
# TODO tomorrow with Abhi, we can discuss, do IK?

# for picking up ingredients, something like the run_dynamic_pose could be useful, we could generate the trajectory with some
# planner and then execute, may be able to constrain x and y with it

# DO NOT RUN BEFORE DEBUGGING, causing suddent jolts in the arm

def generate_trajectory(start_pose, end_pose, args, fa, dt=0.01):
    fa.log_info('Visiting Pose 1')
    fa.goto_pose(start_pose, use_impedance=False) # supposed to be a bit more accurate?

    q1 = fa.get_joints()

    fa.log_info('Visiting Pose 2')
    fa.goto_pose(end_pose, use_impedance=False)
    q2 = fa.get_joints()
    ts = np.arange(0, args.time, dt)

    joints_traj = [utils.min_jerk(q1, q2, t, args.time) for t in ts] #could maybe use another planner
    #print(len(joints_traj))
    #print("ts", ts)
    #print("joint_traj", joints_traj)
    skill_dict = create_formated_skill_dict(joints_traj, ts)
    with open(args.file, 'wb') as pkl_f:
        pkl.dump(skill_dict, pkl_f)
        print("Did save skill dict: {}".format(args.file))

if __name__ == "__main__":
    fa = FrankaArm()
    parser = argparse.ArgumentParser()
    parser.add_argument('--time', '-t', type=float, default=5)
    parser.add_argument('--file', '-f', default='home2bin3_cam_verified.pkl') #filename to save generated trajectory
    args = parser.parse_args()

    # before anything, reset joints to home position
    fa.reset_joints()
    
    # howto get current pose from arm
    # start_pose = fa.get_pose()
    # print(start_pose)

    # get the current pose as the starting pose for generating a trajectory
    # pose1 = start_pose.copy()

    # copy the current pose again to another variable to start defining end pose
    # pose2 = start_pose.copy()
    # define translation to go to desination pose by add/subtract relative translation from current pose
    # pose2.translation -= [0.0, 0.0, 0.1] 

    # either define relative rotation to go to destination pose or directly set final orientation
    #z_rot = np.array([[0, 1, 0], [-1, 0, 0], [0, 0, 1]]) # z axis points down, -90 turn
    #pose2.rotation = pose2.rotation@z_rot
    # pose2.rotation = [[ 9.99721276e-01,  9.19412298e-04,  2.31793417e-02],
    #                 [ 3.28930214e-04, -9.99666019e-01,  2.54656958e-02],
    #                 [ 2.31950137e-02, -2.54509735e-02, -9.99406932e-01]]
    #
    
    # call the generate trajectory function 
    # generate_trajectory(pose1, pose2, args, fa)
    #fa.reset_joints() # back to home


