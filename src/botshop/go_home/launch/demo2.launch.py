import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os

def generate_launch_description():
    # Define the path to the launch files
    realsense_launch_file = os.path.join(
        get_package_share_directory('realsense2_camera'),
        'launch',
        'rs_launch_get_params_from_yaml.py'
    )

    apriltag_launch_file = os.path.join(
        get_package_share_directory('apriltag_hls'),
        'launch',
        'apriltag_launch.py'
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
    ])

def get_package_share_directory(package_name):
    # This function should return the package share directory.
    # Implement this based on your package layout, e.g., using ament_index_python
    from ament_index_python.packages import get_package_share_directory as ament_get_package_share_directory
    return ament_get_package_share_directory(package_name)

