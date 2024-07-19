/*********************************************************************
 * BSD 3-Clause License
 *
 * Copyright (c) 2019 PickNik LLC.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 *  * Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/

#include <Eigen/Geometry>
#include <moveit_task_constructor_demo/pick_place_task.h>
#include <geometry_msgs/msg/pose.hpp>
#include <tf2_eigen/tf2_eigen.hpp>
#include "pick_place_demo_parameters.hpp"
#include "moveit_task_constructor_msgs/action/execute_task_solution.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene/planning_scene.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit/task_constructor/task.h>
#include <moveit/task_constructor/solvers.h>
#include <moveit/moveit_cpp/moveit_cpp.h>
#include <moveit/task_constructor/stages.h>

static const rclcpp::Logger LOGGER = rclcpp::get_logger("moveit_task_constructor_demo");
namespace mtc = moveit::task_constructor;
namespace {
Eigen::Isometry3d vectorToEigen(const std::vector<double>& values) {
	return Eigen::Translation3d(values[0], values[1], values[2]) *
	       Eigen::AngleAxisd(values[3], Eigen::Vector3d::UnitX()) *
	       Eigen::AngleAxisd(values[4], Eigen::Vector3d::UnitY()) *
	       Eigen::AngleAxisd(values[5], Eigen::Vector3d::UnitZ());
}
geometry_msgs::msg::Pose vectorToPose(const std::vector<double>& values) {
	return tf2::toMsg(vectorToEigen(values));
};
}  // namespace

namespace moveit_task_constructor_demo {

void spawnObject(moveit::planning_interface::PlanningSceneInterface& psi,
                 const moveit_msgs::msg::CollisionObject& object) {
	if (!psi.applyCollisionObject(object))
		throw std::runtime_error("Failed to spawn object: " + object.id);
}

moveit_msgs::msg::CollisionObject createTable(const pick_place_task_demo::Params& params) {
	geometry_msgs::msg::Pose pose = vectorToPose(params.table_pose);
	moveit_msgs::msg::CollisionObject object;
	object.id = params.table_name;
	object.header.frame_id = params.table_reference_frame;
	object.primitives.resize(1);
	object.primitives[0].type = shape_msgs::msg::SolidPrimitive::BOX;
	object.primitives[0].dimensions = { params.table_dimensions.at(0), params.table_dimensions.at(1),
		                                 params.table_dimensions.at(2) };
	pose.position.z -= 0.5 * params.table_dimensions[2];  // align surface with world
	object.primitive_poses.push_back(pose);
	return object;
}

moveit_msgs::msg::CollisionObject createObject(const pick_place_task_demo::Params& params) {
	geometry_msgs::msg::Pose pose = vectorToPose(params.object_pose);
	moveit_msgs::msg::CollisionObject object;
	object.id = params.object_name;
	object.header.frame_id = params.object_reference_frame;
	object.primitives.resize(1);
	object.primitives[0].type = shape_msgs::msg::SolidPrimitive::BOX;
	object.primitives[0].dimensions = { params.object_dimensions.at(0), params.object_dimensions.at(1),
		params.object_dimensions.at(2)  };
	pose.position.z += 0.5 * params.object_dimensions[0];
	object.primitive_poses.push_back(pose);
	return object;
}

void setupDemoScene(const pick_place_task_demo::Params& params) {
	// Add table and object to planning scene
	rclcpp::sleep_for(std::chrono::microseconds(100));  // Wait for ApplyPlanningScene service
	moveit::planning_interface::PlanningSceneInterface psi;
	if (params.spawn_table)
	//spawnObject(psi, createTable(params));
	spawnObject(psi, createObject(params));
}

PickPlaceTask::PickPlaceTask(const std::string& task_name) : task_name_(task_name) {}

bool PickPlaceTask::init(const rclcpp::Node::SharedPtr& node, const pick_place_task_demo::Params& params) {
	
	RCLCPP_INFO(LOGGER, "Initializing task pipeline");

	// Reset ROS introspection before constructing the new object
	// TODO(v4hn): global storage for Introspection services to enable one-liner
	task_.reset();
	task_.reset(new moveit::task_constructor::Task());

	Task& t = *task_;
	t.stages()->setName(task_name_);
	t.loadRobotModel(node);

	// Sampling planner
	auto sampling_planner = std::make_shared<solvers::PipelinePlanner>(node);
	sampling_planner->setProperty("goal_joint_tolerance", 1e-5);
	sampling_planner->setTimeout(5.0);
    auto interpolation_planner = std::make_shared<solvers::JointInterpolationPlanner>();

	// Cartesian planner
	auto cartesian_planner = std::make_shared<solvers::CartesianPath>();
	cartesian_planner->setMaxVelocityScalingFactor(0.3);
	cartesian_planner->setMaxAccelerationScalingFactor(0.3);
	cartesian_planner->setStepSize(0.01);
	
	geometry_msgs::msg::PoseStamped initial_position;
    initial_position.header.frame_id="base_link";
    initial_position.pose.orientation.w = 0.72228;
    initial_position.pose.orientation.x = -0.000426298;
    initial_position.pose.orientation.y = 0.6916;
    initial_position.pose.orientation.z =-0.000594771;
    initial_position.pose.position.x =0.755161 ; //object-gripper_offset-object size/2
    initial_position.pose.position.y =0.13454 ; // object
    initial_position.pose.position.z =1.03424 ; // object

	geometry_msgs::msg::TransformStamped tf;
	if (tf.child_frame_id=="pan_and_tilt_camera_link") 
	{ 
		geometry_msgs::msg::PoseStamped cube_pos;
		cube_pos.pose.position.x=tf.transform.translation.x;
		std::cout<<cube_pos.pose.position.x<<std::endl; 
	
	}
	

    const auto& arm_group_name = "arm_ur5e";
    const auto& hand_group_name = "gripper_robotiq";
    const auto& hand_frame = "gripper_robotiq_arg2f_base_link";
    const auto& eef_name = "gripper_robotiq";

	// Set task properties
	t.setProperty("group", arm_group_name);
	t.setProperty("eef", eef_name);
	t.setProperty("hand", hand_group_name);
	t.setProperty("hand_grasping_frame", hand_frame);
	t.setProperty("ik_frame", hand_frame);


	/****************************************************
	 *                                                  *
	 *               Current State                      *
	 *                                                  *
	 ***************************************************/



	{
		auto current_state = std::make_unique<stages::CurrentState>("current state");
		// Verify that object is not attached
		auto applicability_filter =
		    std::make_unique<stages::PredicateFilter>("applicability test", std::move(current_state));
		applicability_filter->setPredicate([object = params.object_name](const SolutionBase& s, std::string& comment) {
			if (s.start()->scene()->getCurrentState().hasAttachedBody(object)) {
				comment = "object with id '" + object + "' is already attached and cannot be picked";
				return false;
			}
			return true;
		});
		t.add(std::move(applicability_filter));

	}

   
	Stage* initial_state_ptr = nullptr;
    
	{  // Open Hand
		auto stage = std::make_unique<stages::MoveTo>("go home", interpolation_planner);
		stage->setGroup(arm_group_name);
		stage->setGoal("home");
		initial_state_ptr = stage.get();  // remember start state for monitoring grasp pose generator
		t.add(std::move(stage));
	}
	
	{  // Open Hand
		auto stage = std::make_unique<stages::MoveTo>("go home", interpolation_planner);
		stage->setGroup(arm_group_name);
		stage->setGoal("pick_air");
		initial_state_ptr = stage.get();  // remember start state for monitoring grasp pose generator
		t.add(std::move(stage));
	}

	{  // Open Hand
		auto stage = std::make_unique<stages::MoveTo>("go home", interpolation_planner);
		stage->setGroup(arm_group_name);
		stage->setGoal(params.arm_home_pose);
		initial_state_ptr = stage.get();  // remember start state for monitoring grasp pose generator
		t.add(std::move(stage));
	}


	/****************************************************
	 *                                                  *
	 *               Move to Pick                       *
	 *                                                  *
	 ***************************************************/
	{  // Move-to pre-grasp
		auto stage = std::make_unique<stages::Connect>(
		    "move to pick", stages::Connect::GroupPlannerVector{ { params.arm_group_name, cartesian_planner} });
		stage->properties().configureInitFrom(Stage::PARENT);
		t.add(std::move(stage));
	}

	{
			auto stage = std::make_unique<stages::MoveRelative>("approach object1", cartesian_planner);
			stage->properties().set("marker_ns", "approach_object");
			stage->properties().set("link", "ur5e_tool0");
			stage->properties().configureInitFrom(Stage::PARENT, { "group" });
			stage->setIKFrame (params.hand_frame);
			stage->setGroup(params.arm_group_name);
			//stage->setMinMaxDistance(params.approach_object_min_dist, params.approach_object_max_dist);

			// Set hand forward direction
			geometry_msgs::msg::Vector3Stamped vec;
			vec.header.frame_id = "ur5e_tool0";
			vec.vector.z = 0;
			vec.vector.x = 0;
			vec.vector.y = 0.1;
			stage->setDirection(vec);
			//stage->setTimeout(10);
			t.add(std::move(stage));
	}


	/****************************************************
	 *                                                  *
	 *               Pick Object                        *
	 *                                                  *
	 ***************************************************/
	Stage* pick_stage_ptr = nullptr;
	{
		auto grasp = std::make_unique<SerialContainer>("pick object");
		t.properties().exposeTo(grasp->properties(), { "eef","group", "ik_frame" });
		grasp->properties().configureInitFrom(Stage::PARENT, { "eef", "group", "ik_frame" });

//         	/****************************************************
//   .... *               Forbid collision (object support)  *
// 		 ***************************************************/
		{
			auto stage = std::make_unique<stages::ModifyPlanningScene>("forbid collision (object,surface)");
			stage->allowCollisions({ params.surface_link }, { params.arm_group_name }, false);
			grasp->insert(std::move(stage));
		}

		/****************************************************
  ---- *               Approach Object                    *
		 ***************************************************/
				/****************************************************
  ---- *               Allow Collision (hand object)   *
		 ***************************************************/
		// {
		// 	auto stage = std::make_unique<stages::ModifyPlanningScene>("allow collision (" + params.hand_group_name + "," + params.object_name + ")");
		// 	stage->allowCollisions(
		// 	    params.object_name,
		// 	    true);
		// 	grasp->insert(std::move(stage));
		// }
		{
			auto stage = std::make_unique<stages::MoveRelative>("approach object", cartesian_planner);
			stage->properties().set("marker_ns", "approach_object");
			stage->properties().set("link", params.hand_frame);
			stage->properties().configureInitFrom(Stage::PARENT, { "group" });
			//stage->setIKFrame (params.hand_frame);
			stage->setGroup(params.arm_group_name);
			//stage->setMinMaxDistance(params.approach_object_min_dist, params.approach_object_max_dist);

			// Set hand forward direction
			geometry_msgs::msg::Vector3Stamped vec;
			vec.header.frame_id = "ur5e_tool0";
			vec.vector.z = 0.2;
			vec.vector.x = 0;
			vec.vector.y = 0;
			stage->setDirection(vec);
			//stage->setTimeout(10);
			grasp->insert(std::move(stage));
		}
				
	

		/****************************************************
  ---- *               Allow Collision (hand object)   *
		 ***************************************************/
		// {
		// 	auto stage = std::make_unique<stages::ModifyPlanningScene>("allow collision (" + params.hand_group_name + "," + params.object_name + ")");
		// 	stage->allowCollisions(
		// 	    params.object_name,
		// 	    true);
		// 	grasp->insert(std::move(stage));
		// }

		/****************************************************
  ---- *               Generate Grasp Pose                *
		 ***************************************************/
		{
			// Sample grasp pose
			auto stage = std::make_unique<stages::GenerateGraspPose>("generate grasp pose");
			stage->properties().configureInitFrom(Stage::PARENT);
			stage->properties().set("marker_ns", "grasp_pose");
			stage->setPreGraspPose(params.hand_open_pose);
			stage->setObject(params.object_name);
			stage->setAngleDelta(M_PI/4);
			stage->setMonitoredStage(initial_state_ptr);  // hook into successful initial-phase solutions

			// Compute IK
			auto wrapper = std::make_unique<stages::ComputeIK>("grasp pose IK", std::move(stage));
			wrapper->setMaxIKSolutions(8);
			//wrapper->setMinSolutionDistance(1.0);
   			wrapper->setIgnoreCollisions(false);
			wrapper->setIKFrame(vectorToEigen(params.grasp_frame_transform), params.hand_frame);
			wrapper->properties().configureInitFrom(Stage::PARENT, { "eef", "group" });
			wrapper->properties().configureInitFrom(Stage::INTERFACE, { "target_pose" });
			grasp->insert(std::move(wrapper));

			for (const auto& element : params.grasp_frame_transform) {
            std::cout << element << " ";
              }

		}

		// Add grasp container to task
		t.add(std::move(grasp));
	}

	// prepare Task structure for planning
	try {
		t.init();
	} catch (InitStageException& e) {
		RCLCPP_ERROR_STREAM(LOGGER, "Initialization failed: " << e);
		return false;
	}

	return true;
}



bool PickPlaceTask::plan(const std::size_t max_solutions) {
	RCLCPP_INFO(LOGGER, "Start searching for task solutions");

	return static_cast<bool>(task_->plan(max_solutions));
}

bool PickPlaceTask::execute() {
	RCLCPP_INFO(LOGGER, "Executing solution trajectory");
	moveit_msgs::msg::MoveItErrorCodes execute_result;

	execute_result = task_->execute(*task_->solutions().front());
	// // If you want to inspect the goal message, use this instead:
	// actionlib::SimpleActionClient<moveit_task_constructor_msgs::msg::ExecuteTaskSolutionAction>
	// execute("execute_task_solution", true); execute.waitForServer();
	// moveit_task_constructor_msgs::msg::ExecuteTaskSolution::Goal execute_goal;
	// task_->solutions().front()->toMsg(execute_goal.solution);
	// execute.sendGoalAndWait(execute_goal);
	// execute_result = execute.getResult()->error_code;

	if (execute_result.val != moveit_msgs::msg::MoveItErrorCodes::SUCCESS) {

		RCLCPP_ERROR_STREAM(LOGGER, "Task execution failed and returned: " << moveit::core::error_code_to_string(execute_result.val));
		return false;
	}
	RCLCPP_WARN_STREAM(LOGGER, "Task execution succeded and returned: " << execute_result.val);
	return true;
}
}  // namespace moveit_task_constructor_demo
