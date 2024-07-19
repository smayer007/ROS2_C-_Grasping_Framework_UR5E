#  Copyright (c) 2021 Franka Emika GmbH
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.

# This file is an adapted version of
# https://github.com/ros-planning/moveit_resources/blob/ca3f7930c630581b5504f3b22c40b4f82ee6369d/panda_moveit_config/launch/demo.launch.py

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (DeclareLaunchArgument, ExecuteProcess, IncludeLaunchDescription,
                            Shutdown)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import yaml
import xacro

def load_yaml(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, 'r') as file:
            return yaml.safe_load(file)
    except EnvironmentError:  # parent of IOError, OSError *and* WindowsError where available
        return None


def generate_launch_description():

    # Command-line arguments

    db_arg = DeclareLaunchArgument(
        'db', default_value='False', description='Database flag'
    )

         # Specify the name of the package and path to xacro file within the package
    pkg_name = 'mmp_moveit_config'
    file_subpath = 'config/ridgeback.urdf.xacro'


    # Use xacro to process the file
    cobot_xacro_file = os.path.join(get_package_share_directory(pkg_name),file_subpath)                                   
    # robot_description_config = Command(
    #     [FindExecutable(name='xacro'), ' ', franka_xacro_file, ' hand:=', load_gripper,
    #      ' robot_ip:=', robot_ip, ' use_fake_hardware:=', use_fake_hardware,
    #      ' fake_sensor_commands:=', fake_sensor_commands])

    robot_description_config = xacro.process_file(cobot_xacro_file).toxml()

    robot_description = {'robot_description': robot_description_config}

    cobot_semantic_xacro_file = os.path.join(get_package_share_directory('mmp_moveit_config'),
                                              'config',
                                              'ridgeback.srdf')
    robot_description_semantic_config = xacro.process_file( cobot_semantic_xacro_file).toxml()
    
    robot_description_semantic = {
        'robot_description_semantic': robot_description_semantic_config
    }

    kinematics_yaml = load_yaml(
        'mmp_moveit_config', 'config/kinematics.yaml'
    )

    # Planning Functionality
    ompl_planning_pipeline_config = {
        'move_group': {
            'planning_plugin': 'ompl_interface/OMPLPlanner',
            'request_adapters': 'default_planner_request_adapters/AddTimeOptimalParameterization '
                                'default_planner_request_adapters/ResolveConstraintFrames '
                                'default_planner_request_adapters/FixWorkspaceBounds '
                                'default_planner_request_adapters/FixStartStateBounds '
                                'default_planner_request_adapters/FixStartStateCollision '
                                'default_planner_request_adapters/FixStartStatePathConstraints',
            'start_state_max_bounds_error': 0.1,
        }
    }
    ompl_planning_yaml = load_yaml(
        'mmp_moveit_config', 'config/ompl_planning.yaml'
    )
    ompl_planning_pipeline_config['move_group'].update(ompl_planning_yaml)

    # Trajectory Execution Functionality
    moveit_simple_controllers_yaml = load_yaml(
        'mmp_moveit_config', 'config/panda_controllers.yaml'
    )
    moveit_controllers = {
        'moveit_simple_controller_manager': moveit_simple_controllers_yaml,
        'moveit_controller_manager': 'moveit_simple_controller_manager'
                                     '/MoveItSimpleControllerManager',
    }

    trajectory_execution = {
        'moveit_manage_controllers': True,
        'trajectory_execution.allowed_execution_duration_scaling': 1.2,
        'trajectory_execution.allowed_goal_duration_margin': 0.5,
        'trajectory_execution.allowed_start_tolerance': 0.01,
    }

    planning_scene_monitor_parameters = {
        'publish_planning_scene': True,
        'publish_geometry_updates': True,
        'publish_state_updates': True,
        'publish_transforms_updates': True,
    }

    # # Start the actual move_group node/action server
    # run_move_group_node = Node(
    #     package='moveit_ros_move_group',
    #     executable='move_group',
    #     output='screen',
    #     parameters=[
    #         robot_description,
    #         robot_description_semantic,
    #         kinematics_yaml,
    #         ompl_planning_pipeline_config,
    #         trajectory_execution,
    #         moveit_controllers,
    #         planning_scene_monitor_parameters,
    #     ],
    # )

    pick_place_demo = Node(
        package="mmp_go_to_pose",
        executable="mmp_go_to_pose",
        output="screen",
        parameters=[
            robot_description,
            robot_description_semantic,
            kinematics_yaml,
            ompl_planning_pipeline_config,
            trajectory_execution,
            moveit_controllers,
            planning_scene_monitor_parameters,
            # moveit_config.robot_description,
            # moveit_config.robot_description_semantic,
            # moveit_config.robot_description_kinematics,
            # moveit_config.planning_pipelines,
            # moveit_config.joint_limits,
        ],
    )

    mtc_task = Node(
        package="moveit_task_constructor_demo",
        executable="cartesian",
        output="screen",
        parameters=[
            robot_description,
            robot_description_semantic,
            kinematics_yaml,
        ],
    )

    # # RViz
    # rviz_base = os.path.join(get_package_share_directory('franka_moveit_config'), 'rviz')
    # rviz_full_config = os.path.join(rviz_base, 'moveit.rviz')

    # Load controllers
    load_controllers = []
    for controller in ['panda_arm_controller', 'joint_state_broadcaster']:
        load_controllers += [
            ExecuteProcess(
                cmd=['ros2 run controller_manager spawner {}'.format(controller)],
                shell=True,
                output='screen',
            )
        ]

    return LaunchDescription(
        [
         # rviz_node,
         # robot_state_publisher,
         # run_move_group_node,
         # ros2_control_node,
         # mongodb_server_node,
         # joint_state_publisher,
         # gripper_launch_file,
         # mtc_task,
         pick_place_demo,
         ]
        # + load_controllers
    )

