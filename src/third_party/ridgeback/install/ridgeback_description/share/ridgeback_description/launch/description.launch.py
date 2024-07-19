import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
import xacro
import dotenv
from dotenv import load_dotenv
from pathlib import Path

def generate_launch_description():
    
    
    #load the config
    #.env file path
    dotenv_path = os.path.join (get_package_share_directory('ridgeback_description') ,'urdf/configs/empty.env')
     
    #load the .env file
    load_dotenv (dotenv_path=dotenv_path)
    #get variable value inside .env
    message = os.getenv('RIDGEBACK_FRONT_HOKUYO_LASER')
    print (message)

    # Specify the name of the package and path to xacro file within the package
    pkg_name = 'ridgeback_description'
    file_subpath = 'urdf/ridgeback.urdf.xacro'


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
        output='screen')

    # Run the node
    return LaunchDescription([
        node_robot_state_publisher,
        joint_state_publisher,
        rviz_node
        
    ])
