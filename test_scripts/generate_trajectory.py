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
    parser.add_argument('--file', '-f', default='home_assembly_traj.pkl')
    args = parser.parse_args()

    fa.reset_joints()
    start_pose = fa.get_pose()

    pose1 = start_pose.copy()
    #pose1.translation -= [0.0, 0.0, 0.1]
    pose2 = start_pose.copy()
    #z_rot = np.array([[0, 1, 0], [-1, 0, 0], [0, 0, 1]]) # z axis points down, -90 turn
    pose2.translation = [0.475, 0.05, 0.45]
    #pose2.rotation = pose2.rotation@z_rot
    
    generate_trajectory(pose1, pose2, args, fa)
    #fa.reset_joints()


