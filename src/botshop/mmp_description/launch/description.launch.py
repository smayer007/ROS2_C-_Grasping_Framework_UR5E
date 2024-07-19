import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
import xacro
import dotenv
from dotenv import load_dotenv
from pathlib import Path

def generate_launch_description():
    
    # Specify the name of the package and path to xacro file within the package
    pkg_name = 'mmp_description'
    file_subpath = 'urdf/ridgeback_ur.urdf'


    # Use xacro to process the file
    xacro_file = os.path.join(get_package_share_directory(pkg_name),file_subpath)
    robot_description_raw = xacro.process_file(xacro_file).toxml()


    # Configure the node
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_raw}] # add other parameters here if required
    )
    	
    joint_state_publisher = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui'
    )

    rviz_node= Node(
        package='rviz2',
        executable='rviz2',
        output='screen',
        arguments=['-d' + os.path.join(get_package_share_directory('mmp_description'), 'rviz', 'robot.rviz')]
        )

    # Run the node
    return LaunchDescription([
        node_robot_state_publisher,
        joint_state_publisher,
        rviz_node
        
    ])
