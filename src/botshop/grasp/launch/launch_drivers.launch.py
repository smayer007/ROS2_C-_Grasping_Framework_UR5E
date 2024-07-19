from launch import LaunchDescription
from launch.actions import ExecuteProcess, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
import os

def generate_launch_description():
    ur_type = 'ur5e'
    tf_prefix = 'ur5e_'
    robot_ip = '192.168.131.5'
    
    # Get the package share directory for ur_robot_driver
    ur_robot_driver_dir = get_package_share_directory('ur_robot_driver')

    # Define the UR driver node to run in the current terminal
    ur_driver_node = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(ur_robot_driver_dir, 'launch', 'ur_control.launch.py')
        ),
        launch_arguments={
            'ur_type': ur_type,
            'tf_prefix': tf_prefix,
            'robot_ip': robot_ip
        }.items()
    )

    # Command to launch the robotiq_2f_adapter_node in a new terminal
    robotiq_adapter_command = [
        'gnome-terminal', '--', 'ros2', 'run', 'robotiq_2f_urcap_adapter', 'robotiq_2f_adapter_node.py',
        '--ros-args', '-p', f'robot_ip:={robot_ip}'
    ]

    return LaunchDescription([
        ur_driver_node,
        ExecuteProcess(
            cmd=robotiq_adapter_command,
            output='screen'
        )
    ])

def get_package_share_directory(package_name):
    """Helper function to get the package share directory."""
    from ament_index_python.packages import get_package_share_directory
    return get_package_share_directory(package_name)

if __name__ == '__main__':
    generate_launch_description()

