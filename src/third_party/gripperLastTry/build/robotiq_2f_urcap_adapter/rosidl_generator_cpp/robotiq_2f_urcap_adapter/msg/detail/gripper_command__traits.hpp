// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotiq_2f_urcap_adapter:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
#define ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotiq_2f_urcap_adapter/msg/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotiq_2f_urcap_adapter
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: max_effort
  {
    out << "max_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.max_effort, out);
    out << ", ";
  }

  // member: max_speed
  {
    out << "max_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: max_effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.max_effort, out);
    out << "\n";
  }

  // member: max_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robotiq_2f_urcap_adapter

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_2f_urcap_adapter::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_2f_urcap_adapter::msg::GripperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_2f_urcap_adapter::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_2f_urcap_adapter::msg::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_2f_urcap_adapter::msg::GripperCommand & msg)
{
  return robotiq_2f_urcap_adapter::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::msg::GripperCommand>()
{
  return "robotiq_2f_urcap_adapter::msg::GripperCommand";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::msg::GripperCommand>()
{
  return "robotiq_2f_urcap_adapter/msg/GripperCommand";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::msg::GripperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::msg::GripperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotiq_2f_urcap_adapter::msg::GripperCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
