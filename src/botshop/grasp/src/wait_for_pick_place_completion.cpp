#include "rclcpp/rclcpp.hpp"
#include "rcl_interfaces/msg/parameter_event.hpp"

class ParameterListener : public rclcpp::Node
{
public:
    ParameterListener()
    : Node("parameter_listener")
    {
        // Subscribe to the parameter pick_place_task_completed
        parameter_subscriber_ = this->create_subscription<rcl_interfaces::msg::ParameterEvent>(
            "/moveit_task_constructor_demo/parameter_events",
            10,
            std::bind(&ParameterListener::parameterCallback, this, std::placeholders::_1));
        RCLCPP_INFO(this->get_logger(), "Parameter listener node initialized");
    }

private:
    void parameterCallback(const rcl_interfaces::msg::ParameterEvent::SharedPtr event)
{
    RCLCPP_INFO(this->get_logger(), "Received parameter event");
    for (const auto & changed_parameter : event->changed_parameters) {
        RCLCPP_INFO(this->get_logger(), "Changed parameter: %s, Value: %s",
                    changed_parameter.name.c_str(),
                    changed_parameter.value.string_value.c_str());

        if (changed_parameter.name == "pick_place_task_completed" && 
            changed_parameter.value.bool_value) {
            RCLCPP_INFO(this->get_logger(), "Parameter pick_place_task_completed is now true");
            // Do something here once the parameter becomes true
        }
    }
}

    rclcpp::Subscription<rcl_interfaces::msg::ParameterEvent>::SharedPtr parameter_subscriber_;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ParameterListener>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
