import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription, RegisterEventHandler, ExecuteProcess, TimerAction
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Define the path to the realsense launch file
    realsense_package_dir = get_package_share_directory('realsense2_camera')
    realsense_launch_file = os.path.join(
        realsense_package_dir,
        'examples',
        'launch_params_from_file',
        'rs_launch_get_params_from_yaml.py'
    )

    if not os.path.exists(realsense_launch_file):
        raise FileNotFoundError(f"Realsense launch file not found: {realsense_launch_file}")

    # Define the path to the apriltag launch file
    apriltag_package_dir = get_package_share_directory('apriltag_hls')
    apriltag_launch_file = os.path.join(
        apriltag_package_dir,
        'launch',
        'apriltag_launch.py'
    )

    if not os.path.exists(apriltag_launch_file):
        raise FileNotFoundError(f"AprilTag launch file not found: {apriltag_launch_file}")

    # Define the path to the demo launch file for mmp_moveit_config
    moveit_package_dir = get_package_share_directory('mmp_moveit_config')
    moveit_demo_launch_file = os.path.join(
        moveit_package_dir,
        'launch',
        'demo.launch.py'
    )

    if not os.path.exists(moveit_demo_launch_file):
        raise FileNotFoundError(f"MoveIt demo launch file not found: {moveit_demo_launch_file}")

    # Define the path to the pickplace launch file for moveit_task_constructor_demo
    pickplace_package_dir = get_package_share_directory('moveit_task_constructor_demo')
    pickplace_launch_file = os.path.join(
        pickplace_package_dir,
        'launch',
        'pickplace.launch.py'
    )

    if not os.path.exists(pickplace_launch_file):
        raise FileNotFoundError(f"PickPlace launch file not found: {pickplace_launch_file}")

    # Define the Robotiq adapter node launch
    robotiq_adapter_node = Node(
        package='robotiq_2f_urcap_adapter',
        executable='robotiq_2f_adapter_node.py',
        output='screen',
        parameters=[{'robot_ip': '192.168.131.5'}]
    )

    # Define the PickPlace launch as an ExecuteProcess
    pickplace_launch_action = ExecuteProcess(
        cmd=['ros2', 'launch', 'moveit_task_constructor_demo', 'pickplace.launch.py'],
        output='screen'
    )

    return LaunchDescription([
        # Include the Realsense launch file
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(realsense_launch_file)
        ),
        
        # Include the AprilTag launch file
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(apriltag_launch_file)
        ),

        
        # Include the MoveIt demo launch file
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(moveit_demo_launch_file)
        ),
        
        # Start the PickPlace launch action
        pickplace_launch_action,

        # Timer to periodically check if the pick_place_task_completed parameter is set
        TimerAction(
            period=0.01,
            actions=[
                RegisterEventHandler(
                    event_handler=OnProcessExit(
                        target_action=pickplace_launch_action,
                        on_exit=[
                            ExecuteProcess(
                                cmd=['ros2', 'run', 'robotiq_2f_urcap_adapter', 'robotiq_2f_adapter_node.py', '--ros-args', '-p', 'robot_ip:=192.168.131.5'],
                                output='screen'
                            )
                        ]
                    )
                ),
                ExecuteProcess(
                    cmd=['ros2', 'run', 'moveit_task_constructor_demo', 'wait_for_pick_place_completion'],
                    output='screen'
                )
            ]
        )
    ])

