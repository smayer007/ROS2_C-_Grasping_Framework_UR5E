import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder


def generate_launch_description():
    moveit_config = (
        MoveItConfigsBuilder("mmp")
        .planning_pipelines(pipelines=["ompl"])
        .robot_description(file_path="config/ridgeback.urdf.xacro")
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .to_moveit_configs()
    )
    
    ompl_planning_pipeline_config = {
        'move_group': {
            'planning_plugin': 'ompl_interface/OMPLPlanner',
            'request_adapters': 'default_planner_request_adapters/LimitMaxCartesianLinkSpeed '
                                'default_planner_request_adapters/AddTimeOptimalParameterization '
                                'default_planner_request_adapters/ResolveConstraintFrames '
                                'default_planner_request_adapters/FixWorkspaceBounds '
                                'default_planner_request_adapters/FixStartStateBounds '
                                'default_planner_request_adapters/FixStartStateCollision '
                                'default_planner_request_adapters/FixStartStatePathConstraints',
            'start_state_max_bounds_error': 0.1,
        }
    }

    pick_place_demo = Node(
        package="task1",
        executable="pick_place_demo",
        output="screen",
        parameters=[
            os.path.join(
                get_package_share_directory("task1"),
                "config",
                "mmp_config.yaml",
            ),
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            moveit_config.planning_pipelines,
            moveit_config.joint_limits,
            ompl_planning_pipeline_config,
        ],
    )

    mmp_moveit_config_dir = get_package_share_directory('mmp_moveit_config')

    demo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(mmp_moveit_config_dir, 'launch', 'demo.launch.py')
        )
    )

    return LaunchDescription([
        demo_launch,
        pick_place_demo
    ])

