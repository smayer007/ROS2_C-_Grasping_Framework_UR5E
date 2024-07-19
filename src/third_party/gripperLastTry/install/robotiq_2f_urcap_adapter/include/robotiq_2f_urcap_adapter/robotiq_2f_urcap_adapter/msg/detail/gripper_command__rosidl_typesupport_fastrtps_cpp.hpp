// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from robotiq_2f_urcap_adapter:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robotiq_2f_urcap_adapter/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "robotiq_2f_urcap_adapter/msg/detail/gripper_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace robotiq_2f_urcap_adapter
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotiq_2f_urcap_adapter
cdr_serialize(
  const robotiq_2f_urcap_adapter::msg::GripperCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotiq_2f_urcap_adapter
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robotiq_2f_urcap_adapter::msg::GripperCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotiq_2f_urcap_adapter
get_serialized_size(
  const robotiq_2f_urcap_adapter::msg::GripperCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotiq_2f_urcap_adapter
max_serialized_size_GripperCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robotiq_2f_urcap_adapter

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robotiq_2f_urcap_adapter
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotiq_2f_urcap_adapter, msg, GripperCommand)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
