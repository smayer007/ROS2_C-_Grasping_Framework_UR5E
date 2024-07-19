from launch import LaunchDescription
from launch_ros.actions import Node
import subprocess
import time

def generate_launch_description():
    # Define the desired parameter value
    desired_value = "Boolean value is: True"
    
    # Loop until the parameter value matches the desired value
    while True:
        # Run the command to get the parameter value
        result = subprocess.run(['ros2', 'param', 'get', '/moveit_task_constructor_demo', 'pick_place_task_completed'],
                                capture_output=True, text=True)

        # Check if the command was successful
        if result.returncode == 0:
            # Store the output in a string variable
            check_parameter_output = result.stdout.strip()
            print(check_parameter_output)
            # Compare check_parameter_output with the desired string
            if check_parameter_output == desired_value:
                # Send the action goal if the strings are equal
                action_result = subprocess.run([
                    'ros2', 'action', 'send_goal', '-f', 
                    '/robotiq_2f_urcap_adapter/gripper_command', 
                    'robotiq_2f_urcap_adapter/GripperCommand', 
                    '{command: {position: 0.0, max_effort: 140, max_speed: 0.15}}'
                ], capture_output=True, text=True)
                
                # Print the result of the action command
                print(action_result.stdout)
                print(action_result.stderr)

                # Break out of the loop once the action is sent
                break

        # Wait for a short period before checking again
        time.sleep(1)

    # Return an empty launch description if the condition is not met
    return LaunchDescription([])

if __name__ == '__main__':
    ld = generate_launch_description()

