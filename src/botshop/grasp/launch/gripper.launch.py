from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, TimerAction
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    robot_ip = LaunchConfiguration('robot_ip', default='192.168.131.5')
    
    robotiq_adapter_node = Node(
        package='robotiq_2f_urcap_adapter',
        executable='robotiq_2f_adapter_node.py',
        name='robotiq_2f_adapter_node',
        output='screen',
        parameters=[{
            'robot_ip': robot_ip
        }]
    )

    send_gripper_command = ExecuteProcess(
        cmd=[
            'ros2', 'action', 'send_goal', '-f', 
            '/robotiq_2f_urcap_adapter/gripper_command', 
            'robotiq_2f_urcap_adapter/GripperCommand', 
            '{command: {position: 0.0, max_effort: 140, max_speed: 0.15}}'
        ],
        output='screen'
    )

    delayed_gripper_command = TimerAction(
        period=5.0,  # Delay to ensure the node is up and running
        actions=[send_gripper_command]
    )
    
    return LaunchDescription([
        robotiq_adapter_node,
        delayed_gripper_command
    ])

