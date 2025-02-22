import logging
import math
import numpy as np
from autolab_core import RigidTransform

class FrankaConstants:
    '''
    Contains default robot values, as well as robot limits.
    All units are in SI. 
    '''

    LOGGING_LEVEL = logging.INFO

    # translational stiffness, rotational stiffness
    DEFAULT_FORCE_AXIS_TRANSLATIONAL_STIFFNESS = 600
    DEFAULT_FORCE_AXIS_ROTATIONAL_STIFFNESS = 20

    # buffer time
    DEFAULT_TERM_BUFFER_TIME = 0.2

    HOME_JOINTS = [0, -math.pi / 4, 0, -3 * math.pi / 4, 0, math.pi / 2, math.pi / 4]
    HOME_POSE = RigidTransform(rotation=np.array([
            [1, 0, 0],
            [0, -1, 0],
            [0, 0, -1],
        ]), translation=np.array([0.3069, 0, 0.4224]),
        from_frame='franka_tool', to_frame='world')
    READY_JOINTS = [0, -math.pi/4, 0, -2.85496998, 0, 2.09382820,  math.pi/4]
    READY_POSE = RigidTransform(rotation=np.array([
            [1, 0, 0],
            [0, -1, 0],
            [0, 0, -1],
        ]), translation=np.array([0.3069, 0, 0.2867]),
        from_frame='franka_tool', to_frame='world')

    # See https://frankaemika.github.io/docs/control_parameters.html
    JOINT_LIMITS_MIN = [-2.8973, -1.7628, -2.8973, -3.0718, -2.8973, -0.0175, -2.8973]
    JOINT_LIMITS_MAX = [2.8973, 1.7628, 2.8973, -0.0698, 2.8973, 3.7525, 2.8973]

    DEFAULT_POSE_THRESHOLDS = [0.0001, 0.0001, 0.0001, 0.0001, 0.0001, 0.0001]
    DEFAULT_JOINT_THRESHOLDS = [0.0001, 0.0001, 0.0001, 0.0001, 0.0001, 0.0001, 0.0001]

    GRIPPER_WIDTH_MAX = 0.08
    GRIPPER_WIDTH_MIN = 0.0
    GRIPPER_MAX_FORCE = 60.0

    MAX_LIN_MOMENTUM = 20
    MAX_ANG_MOMENTUM = 2
    MAX_LIN_MOMENTUM_CONSTRAINED = 100

    DEFAULT_FRANKA_INTERFACE_TIMEOUT = 10
    ACTION_WAIT_LOOP_TIME = 0.001

    GRIPPER_CMD_SLEEP_TIME = 0.2

    DEFAULT_K_GAINS = [600.0, 600.0, 600.0, 600.0, 250.0, 150.0, 50.0]
    DEFAULT_D_GAINS = [50.0, 50.0, 50.0, 50.0, 30.0, 25.0, 15.0]
    DEFAULT_TRANSLATIONAL_STIFFNESSES = [600.0, 600.0, 600.0]
    DEFAULT_ROTATIONAL_STIFFNESSES = [50.0, 50.0, 50.0]

    DEFAULT_JOINT_IMPEDANCES = [3000, 3000, 3000, 2500, 2500, 2000, 2000]
    DEFAULT_CARTESIAN_IMPEDANCES = [3000, 3000, 3000, 300, 300, 300]

    DEFAULT_LOWER_TORQUE_THRESHOLDS_ACCEL = [20.0,20.0,18.0,18.0,16.0,14.0,12.0]
    DEFAULT_UPPER_TORQUE_THRESHOLDS_ACCEL = [120.0,120.0,120.0,118.0,116.0,114.0,112.0]
    DEFAULT_LOWER_TORQUE_THRESHOLDS_NOMINAL = [20.0,20.0,18.0,18.0,16.0,14.0,12.0]
    DEFAULT_UPPER_TORQUE_THRESHOLDS_NOMINAL = [120.0,120.0,118.0,118.0,116.0,114.0,112.0]

    DEFAULT_LOWER_FORCE_THRESHOLDS_ACCEL = [10.0,10.0,10.0,10.0,10.0,10.0]
    DEFAULT_UPPER_FORCE_THRESHOLDS_ACCEL = [120.0,120.0,120.0,125.0,125.0,125.0]
    DEFAULT_LOWER_FORCE_THRESHOLDS_NOMINAL = [10.0,10.0,10.0,10.0,10.0,10.0]
    DEFAULT_UPPER_FORCE_THRESHOLDS_NOMINAL = [120.0,120.0,120.0,125.0,125.0,125.0]

    DH_PARAMS = np.array([[0, 0.333, 0, 0],
                        [0, 0, -np.pi/2, 0],
                        [0, 0.316, np.pi/2, 0],
                        [0.0825, 0, np.pi/2, 0],
                        [-0.0825, 0.384, -np.pi/2, 0],
                        [0, 0, np.pi/2, 0],
                        [0.088, 0, np.pi/2, 0],
                        [0, 0.107, 0, 0],
                        [0, 0.1034, 0, 0]])

    N_REV_JOINTS = 7

    COLLISION_BOX_SHAPES = np.array([
        [0.23, 0.2, 0.1],
        [0.13, 0.12, 0.1], 
        [0.12, 0.1, 0.2],
        [0.15, 0.27, 0.11],
        [0.12, 0.1, 0.2],
        [0.13, 0.12, 0.25],
        [0.13, 0.23, 0.15],
        [0.12, 0.12, 0.4],
        [0.12, 0.12, 0.25],
        [0.13, 0.23, 0.12],
        [0.05, 0.05, 0.238], # old z value was 0.2, reduced this box size from 0.12 x 0.12
        #[0.08, 0.22, 0.17], represented old end effector
        [0.06, 0.06, 0.088], # new collision box shape, change if new EE
        [0.04, 0.04, 0.08] # bottom half of EE
    ])

    COLLISION_BOX_LINKS = [1, 1, 1, 1, 1, 3, 4, 5, 5, 5, 7, 7, 7]

    # These poses are based on the links they are attatched to
    COLLISION_BOX_POSES = np.array([
        [[ 1.        ,  0.        ,  0.        , -0.04      ],
        [ 0.        ,  1.        ,  0.        ,  0.        ],
        [ 0.        ,  0.        ,  1.        , -0.283     ],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 1.        ,  0.        ,  0.        , -0.009     ],
        [ 0.        ,  1.        ,  0.        ,  0.        ],
        [ 0.        ,  0.        ,  1.        , -0.183     ],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 1.        ,  0.        ,  0.        ,  0.        ],
        [ 0.        ,  0.81038486, -0.58589793, -0.032     ],
        [ 0.        ,  0.58589793,  0.81038486, -0.082     ],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 1.        ,  0.        ,  0.        , -0.008     ],
        [ 0.        ,  1.        ,  0.        ,  0.        ],
        [ 0.        ,  0.        ,  1.        ,  0.        ],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 1.        ,  0.        ,  0.        ,  0.        ],
        [ 0.        ,  0.81038486, -0.58589793,  0.042     ],
        [ 0.        ,  0.58589793,  0.81038486,  0.067     ],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 1.        ,  0.        ,  0.        ,  0.00687   ],
        [ 0.        ,  1.        ,  0.        ,  0.        ],
        [ 0.        ,  0.        ,  1.        , -0.139     ],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 1.        , -0.        ,  0.        , -0.008     ],
        [ 0.        ,  0.        ,  1.        ,  0.004     ],
        [-0.        , -1.        ,  0.        ,  0.        ],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 1.        , -0.        ,  0.        ,  0.00422   ],
        [ 0.        ,  0.98480775,  0.17364817,  0.05367   ],
        [-0.        , -0.17364817,  0.98480775, -0.121     ],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 1.        ,  0.        ,  0.        ,  0.00422   ],
        [ 0.        ,  1.        ,  0.        ,  0.00367   ],
        [ 0.        ,  0.        ,  1.        , -0.263     ],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 1.        ,  0.        ,  0.        ,  0.00328   ],
        [ 0.        ,  1.        ,  0.        ,  0.0176    ],
        [ 0.        ,  0.        ,  1.        , -0.0055    ],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
    #    [[ 1.        ,  0.        ,  0.        , -0.0136    ],
    #     [ 0.        , -1.        ,  0.        ,  0.0092    ],
    #     [ 0.        ,  0.        , -1.        ,  0.0083    ],
    #     [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 1.        ,  0.        ,  0.        , -0.0136    ],
        [ 0.        , -1.        ,  0.        ,  0.0092    ],
        [ 0.        ,  0.        , -1.        ,  0.0273    ], # Unsure if translation is in this direction
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
    #    [[ 0.70710678,  0.70710678,  0.        ,  0.0136    ], # represented old end effector
    #     [-0.70710678,  0.70710678, -0.        , -0.0092    ],
    #     [-0.        ,  0.        ,  1.        ,  0.1457    ],
    #     [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 0.70710678,  0.70710678,  0.        ,  0.0136    ],
        [-0.70710678,  0.70710678, -0.        , -0.0092    ],
        [-0.        ,  0.        ,  1.        ,  0.1457 -0.009], # new end effector portrudes 0.05 m more than old one, change if new EE
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
       [[ 0.70710678,  0.70710678,  0.        ,  0.0136    ],
        [-0.70710678,  0.70710678, -0.        , -0.0092    ],
        [-0.        ,  0.        ,  1.        ,  0.1457 - 0.009 + 0.04],
        [ 0.        ,  0.        ,  0.        ,  1.        ]],
        ]
    )

    JOINT_NAMES = ['panda_joint1',
                'panda_joint2',
                'panda_joint3',
                'panda_joint4',
                'panda_joint5',
                'panda_joint6',
                'panda_joint7',
                'panda_finger_joint1', 
                'panda_finger_joint2']

    '''
    Side view
        
    ---   -   -   ---
    |||   |   |   |||
    -----------------
    |		|
    |  Box 1	|
    -----------------
     
    Top view 

                           Arm
        
    ------------------
    |    Box 2       |
    |----------------|
    |  |          |  |
    |  |          |  |
    |B |----------| B|
    |o     Box 3    o|
    |x |----------| x|
    |  |          |  |
    |7 |          | 6|
    |  |----------|  |
    |      Box 4     |
    |  |----------|  |
    |  |          |  |
    |  |          |  |
    |----------------|
    |      Box 5     |
    ------------------
        
        note, using outside dimensions of bin: 0.16 x 0.26, boxes may overlap
        '''
    # TODO Refine these
    # These seem to be used internally in frankapy, but not for checking in FCI
    WORKSPACE_WALLS = np.array([
        # sides
        [0.25, 0.55, 0.5, 0, 0, 0, 1.1, 0.01, 1.1],
        [0.25, -0.55, 0.5, 0, 0, 0, 1.1, 0.01, 1.1],
        # back
        [-0.41, 0, 0.5, 0, 0, 0, 0.01, 1, 1.1], # keep the same for now
        # front
        [0.77, 0, 0.5, 0, 0, 0, 0.01, 1, 1.1],
        # top
        [0.25, 0, 1, 0, 0, 0, 1.2, 1, 0.01],
        # bottom
        [0.25, 0, -0.05, 0, 0, 0, 1.2, 1, 0.01],
        
    #     # sandwich assembly area
    #     [0.5, 0.25, 0.125, 0, 0, 0, 0.68, 0.695, 0.25],
        
    #     # right bin area

    #     # Box 1 
    #     [0.43, -0.3615, 0.0, 0, 0, 0, 0.68, 0.375, 0.001], # Assuming roughly 6 inch deep bins
        
    #     # Box 2
    #     [0.11, -0.3615, 0.125, 0, 0, 0, 0.08, 0.375, 0.26],

    #     # Box 3 
    #     [0.344, -0.3615, 0.125, 0, 0, 0, 0.04, 0.375, 0.26],

    #     # Box 4
    #     [0.534, -0.3615, 0.125, 0, 0, 0, 0.04, 0.375, 0.26],

    #     # Box 5
    #     [0.75, -0.3615, 0.125, 0, 0, 0, 0.08, 0.375, 0.26],
        
    #     # Box 6
    #     [0.43, -0.18, 0.125, 0, 0, 0, 0.68, 0.07, 0.27],
        
    #     # Box 7
    #     [0.43, -0.53, 0.125, 0, 0, 0, 0.68, 0.07, 0.27]
    ])


    # WORKSPACE_WALLS = np.array([
    #     # sides
    #     [0.15, 0.46, 0.5, 0, 0, 0, 1.2, 0.01, 1.1],
    #     [0.15, -0.46, 0.5, 0, 0, 0, 1.2, 0.01, 1.1],
    #     # back
    #     [-0.41, 0, 0.5, 0, 0, 0, 0.01, 1, 1.1],
    #     # front
    #     [0.75, 0, 0.5, 0, 0, 0, 0.01, 1, 1.1],
    #     # top
    #     [0.2, 0, 1, 0, 0, 0, 1.2, 1, 0.01],
    #     # bottom
    #     [0.2, 0, -0.05, 0, 0, 0, 1.2, 1, 0.01]
    # ])

    DYNAMIC_SKILL_WAIT_TIME = 0.3

    DEFAULT_HFPC_FORCE_GAIN = [0.1] * 6
    DEFAULT_HFPC_S = [1, 1, 1, 1, 1, 1]
