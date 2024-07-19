import os

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction, ExecuteProcess
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    # Get the package share directory for task2
    task2_dir = get_package_share_directory('task2')

    # Include the pickplace.launch.py launch file from task2 package
    pickplace_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(task2_dir, 'launch', 'pickplace.launch.py')
        )
    )

    # Timer action to execute open_gripper.launch.py in a new terminal after 1 second
    timer_action = TimerAction(
        period=1.0,
        actions=[
            ExecuteProcess(
                cmd=['gnome-terminal', '--', 'ros2', 'launch', 'task2', 'open_gripper.launch.py'],
                output='screen'
            )
        ]
    )

    return LaunchDescription([
        pickplace_launch,
        timer_action
    ])

def get_package_share_directory(package_name):
    """Helper function to get the package share directory."""
    from ament_index_python.packages import get_package_share_directory
    return get_package_share_directory(package_name)

if __name__ == '__main__':
    generate_launch_description()

