// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotiq_2f_urcap_adapter:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
#define ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotiq_2f_urcap_adapter/msg/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotiq_2f_urcap_adapter
{

namespace msg
{

namespace builder
{

class Init_GripperCommand_max_speed
{
public:
  explicit Init_GripperCommand_max_speed(::robotiq_2f_urcap_adapter::msg::GripperCommand & msg)
  : msg_(msg)
  {}
  ::robotiq_2f_urcap_adapter::msg::GripperCommand max_speed(::robotiq_2f_urcap_adapter::msg::GripperCommand::_max_speed_type arg)
  {
    msg_.max_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::msg::GripperCommand msg_;
};

class Init_GripperCommand_max_effort
{
public:
  explicit Init_GripperCommand_max_effort(::robotiq_2f_urcap_adapter::msg::GripperCommand & msg)
  : msg_(msg)
  {}
  Init_GripperCommand_max_speed max_effort(::robotiq_2f_urcap_adapter::msg::GripperCommand::_max_effort_type arg)
  {
    msg_.max_effort = std::move(arg);
    return Init_GripperCommand_max_speed(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::msg::GripperCommand msg_;
};

class Init_GripperCommand_position
{
public:
  Init_GripperCommand_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_max_effort position(::robotiq_2f_urcap_adapter::msg::GripperCommand::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GripperCommand_max_effort(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::msg::GripperCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_2f_urcap_adapter::msg::GripperCommand>()
{
  return robotiq_2f_urcap_adapter::msg::builder::Init_GripperCommand_position();
}

}  // namespace robotiq_2f_urcap_adapter

#endif  // ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
