[](url)# Grasping framework based on AprilTags
 A group of packages used to run a pick and place demonstration for the MMP robot.
# Launch the MMP description and visualize it on RViz
This package is used to visualize using a ROS2 launch file the robot on RViz.
To visualize the mmp, you can run:

`ros2 launch mmp_description description.launch.py

# Launch the moveit_config package
We prepared the moveit config files thanks to the moveit setup assisstant, this configuration can be tested by using : 

`ros2 launch mmp_moveit_config demo.launch.py`
`
# Launch the UR_driver and the gripper adapter node
For the gripper which was a major limitation, we used a workaround to control it through ROS by making use of an adapter node that delivers directives to the gripper URCap through ROS2 actions with which we were able to specify the desired gripper width, the velocity and effort of moving the gripper while always respecting its physical
limitations. 
In the same launch file we will start this adapter node so the gripper can receive ROS2 actions as well as the Universal Robot driver for the UR5E arm with the needed parameters. To do so: 

`ros2 launch moveit_task_constructor_demo launch_drivers.launch.py`


# Move the arm to a home position
Move the arm to a home position so the camera has a clear field of view

`ros2 launch moveit_task_constructor_demo pickandplace2.launch.py`

# Launch the camera, the Image processing pipeline, the move_to_pick motion and send an action to close the gripper

This launch file starts the Intel Realsense camera with some parameters defined in YAML file (like the resolution), start the image processing pipeline as well as the the move to grasp action, we will always keep checking for a ROS2 parameter indicating when the move to grasp motion is done so that another launch file is automatically triggered to send an action to close the gripper

`ros2 launch moveit_task_constructor_demo demo2_handler_final.launch.py `

# Launch the move to place motion and open the gripper
This launch file start the moveit task to move to the place position and trigger another launch file that sends action to the gripper to open it once the motion to place position is done.

`ros2 launch task2 place_final.launch.py `

