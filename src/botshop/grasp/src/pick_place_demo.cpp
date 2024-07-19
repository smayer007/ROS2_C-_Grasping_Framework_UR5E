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

// ROS
#include <rclcpp/rclcpp.hpp>

// MTC pick/place demo implementation
#include <moveit_task_constructor_demo/pick_place_task.h>

#include "pick_place_demo_parameters.hpp"

#include <rclcpp/rclcpp.hpp>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <rclcpp/parameter.hpp>
// MTC pick/place demo implementation
#include <moveit_task_constructor_demo/pick_place_task.h>
#include "pick_place_demo_parameters.hpp"

static const rclcpp::Logger LOGGER = rclcpp::get_logger("moveit_task_constructor_demo");

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    rclcpp::NodeOptions node_options;
    node_options.automatically_declare_parameters_from_overrides(true);
    auto node = rclcpp::Node::make_shared("moveit_task_constructor_demo", node_options);
    std::thread spinning_thread([node] { rclcpp::spin(node); });
     // Declare the parameter
     // Declare the parameter with a descriptor
    // auto parameter_descriptor = rcl_interfaces::msg::ParameterDescriptor();
    // parameter_descriptor.description = "Flag indicating if the pick and place task is completed";
    node->declare_parameter("pick_place_task_completed", false);
    // Initialize parameters
    const auto param_listener = std::make_shared<pick_place_task_demo::ParamListener>(node);
    auto params = param_listener->get_params();
    std::vector<double> req_pose; 
     // Create a tf2 buffer and listener

    auto tf_buffer = std::make_shared<tf2_ros::Buffer>(node->get_clock());
    auto tf_listener = std::make_shared<tf2_ros::TransformListener>(*tf_buffer);

    // Wait a bit to ensure the buffer gets some transforms
    rclcpp::sleep_for(std::chrono::seconds(2));

    // Lookup transform between frames (example frames: "base_link" and "camera_link")
    std::string parent_link = "world";
    std::string child_link = "ID13";
    geometry_msgs::msg::TransformStamped transformStamped;
    try {
        transformStamped = tf_buffer->lookupTransform(parent_link, child_link, tf2::TimePointZero);
        RCLCPP_INFO(LOGGER, "Translation: x: %f, y: %f, z: %f", 
                    transformStamped.transform.translation.x,
                    transformStamped.transform.translation.y,
                    transformStamped.transform.translation.z);
        RCLCPP_INFO(LOGGER, "Rotation: x: %f, y: %f, z: %f, w: %f", 
                    transformStamped.transform.rotation.x,
                    transformStamped.transform.rotation.y,
                    transformStamped.transform.rotation.z,
                    transformStamped.transform.rotation.w);

    } catch (tf2::TransformException &ex) {
        RCLCPP_ERROR(LOGGER, "Could not get transform: %s", ex.what());
    }
    params.object_pose[0]=transformStamped.transform.translation.x+0.05;
    params.object_pose[1]=transformStamped.transform.translation.y+0.075;
    params.object_pose[2]=transformStamped.transform.translation.z;
    moveit_task_constructor_demo::setupDemoScene(params);

    // Construct and run pick/place task
    moveit_task_constructor_demo::PickPlaceTask pick_place_task("pick_place_task");
    if (!pick_place_task.init(node, params)) {
        RCLCPP_INFO(LOGGER, "Initialization failed");
        return 1;
    }
    if (pick_place_task.plan(params.max_solutions)) {
        RCLCPP_INFO(LOGGER, "Planning succeeded");
        if (true) {
            RCLCPP_INFO(LOGGER, "Execution starting");
            pick_place_task.execute();
            RCLCPP_INFO(LOGGER, "Execution complete");
            node->set_parameter(rclcpp::Parameter("pick_place_task_completed", true));

        } else {
            RCLCPP_INFO(LOGGER, "Execution disabled");
        }
    } else {
        RCLCPP_INFO(LOGGER, "Planning failed");
    }

    // Keep introspection alive
    spinning_thread.join();
    return 0;
}
