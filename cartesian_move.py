import numpy as np
from autolab_core import RigidTransform
import time

from frankapy import FrankaArm


if __name__ == "__main__":
    fa = FrankaArm()
    fa.reset_joints()
    print(fa.get_collision_boxes_poses())
    orig_pose = fa.get_pose()
    new_pose = orig_pose.copy()
    new_pose.translation += [0.0, 0.0, 0.2]
    fa.goto_pose(new_pose)
    time.sleep(3)
    fa.goto_pose(orig_pose)
    print(fa.get_pose())