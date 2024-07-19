from launch import LaunchDescription
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder

def generate_launch_description():
    moveit_config = MoveItConfigsBuilder("mmp").to_dict()
    
    planning_scene_monitor_parameters = {
        'publish_planning_scene': True,
        'publish_geometry_updates': True,
        'publish_state_updates': True,
        'publish_transforms_updates': True,
    }
    
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
    
    # MTC Demo node
    pick_place_demo = Node(
        package="mmp_go_to_pose",
        executable="mmp_go_to_pose",
        output="screen",
        parameters=[
          moveit_config,
          planning_scene_monitor_parameters,
          ompl_planning_pipeline_config,
         
        ],
    )

    return LaunchDescription([pick_place_demo])
