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

/* Author: Henning Kayser, Simon Goldstein
  Desc:   A demo to show MoveIt Task Constructor in action
*/

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

static const rclcpp::Logger LOGGER = rclcpp::get_logger("task1");
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

   

		
	/****************************************************
	 *                                                  *
	 *               Open Hand                          *
	 *                                                  *
	 ***************************************************/
	Stage* initial_state_ptr = nullptr;
	
	{  // Open Hand
		auto stage = std::make_unique<stages::MoveTo>("go home", interpolation_planner);
		stage->setGroup(arm_group_name);
		stage->setGoal("home");
		initial_state_ptr = stage.get();  // remember start state for monitoring grasp pose generator
		t.add(std::move(stage));
	}

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
