// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robotiq_2f_urcap_adapter:action/MoveGripper.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__TRAITS_HPP_
#define ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robotiq_2f_urcap_adapter/action/detail/move_gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robotiq_2f_urcap_adapter
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGripper_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGripper_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGripper_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_2f_urcap_adapter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_2f_urcap_adapter::action::MoveGripper_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_2f_urcap_adapter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_2f_urcap_adapter::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_2f_urcap_adapter::action::MoveGripper_Goal & msg)
{
  return robotiq_2f_urcap_adapter::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::action::MoveGripper_Goal>()
{
  return "robotiq_2f_urcap_adapter::action::MoveGripper_Goal";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::action::MoveGripper_Goal>()
{
  return "robotiq_2f_urcap_adapter/action/MoveGripper_Goal";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotiq_2f_urcap_adapter::action::MoveGripper_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robotiq_2f_urcap_adapter
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGripper_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGripper_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGripper_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_2f_urcap_adapter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_2f_urcap_adapter::action::MoveGripper_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_2f_urcap_adapter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_2f_urcap_adapter::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_2f_urcap_adapter::action::MoveGripper_Result & msg)
{
  return robotiq_2f_urcap_adapter::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::action::MoveGripper_Result>()
{
  return "robotiq_2f_urcap_adapter::action::MoveGripper_Result";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::action::MoveGripper_Result>()
{
  return "robotiq_2f_urcap_adapter/action/MoveGripper_Result";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robotiq_2f_urcap_adapter::action::MoveGripper_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robotiq_2f_urcap_adapter
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGripper_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGripper_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGripper_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_2f_urcap_adapter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_2f_urcap_adapter::action::MoveGripper_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_2f_urcap_adapter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_2f_urcap_adapter::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_2f_urcap_adapter::action::MoveGripper_Feedback & msg)
{
  return robotiq_2f_urcap_adapter::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback>()
{
  return "robotiq_2f_urcap_adapter::action::MoveGripper_Feedback";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback>()
{
  return "robotiq_2f_urcap_adapter/action/MoveGripper_Feedback";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "robotiq_2f_urcap_adapter/action/detail/move_gripper__traits.hpp"

namespace robotiq_2f_urcap_adapter
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGripper_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGripper_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGripper_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_2f_urcap_adapter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_2f_urcap_adapter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_2f_urcap_adapter::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request & msg)
{
  return robotiq_2f_urcap_adapter::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request>()
{
  return "robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request>()
{
  return "robotiq_2f_urcap_adapter/action/MoveGripper_SendGoal_Request";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace robotiq_2f_urcap_adapter
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGripper_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGripper_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGripper_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_2f_urcap_adapter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_2f_urcap_adapter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_2f_urcap_adapter::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response & msg)
{
  return robotiq_2f_urcap_adapter::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response>()
{
  return "robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response>()
{
  return "robotiq_2f_urcap_adapter/action/MoveGripper_SendGoal_Response";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal>()
{
  return "robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal>()
{
  return "robotiq_2f_urcap_adapter/action/MoveGripper_SendGoal";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request>::value &&
    has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request>::value &&
    has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace robotiq_2f_urcap_adapter
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGripper_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGripper_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGripper_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_2f_urcap_adapter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_2f_urcap_adapter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_2f_urcap_adapter::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request & msg)
{
  return robotiq_2f_urcap_adapter::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request>()
{
  return "robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request>()
{
  return "robotiq_2f_urcap_adapter/action/MoveGripper_GetResult_Request";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "robotiq_2f_urcap_adapter/action/detail/move_gripper__traits.hpp"

namespace robotiq_2f_urcap_adapter
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGripper_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGripper_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGripper_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_2f_urcap_adapter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_2f_urcap_adapter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_2f_urcap_adapter::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response & msg)
{
  return robotiq_2f_urcap_adapter::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response>()
{
  return "robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response>()
{
  return "robotiq_2f_urcap_adapter/action/MoveGripper_GetResult_Response";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_Result>::value> {};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_Result>::value> {};

template<>
struct is_message<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult>()
{
  return "robotiq_2f_urcap_adapter::action::MoveGripper_GetResult";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult>()
{
  return "robotiq_2f_urcap_adapter/action/MoveGripper_GetResult";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request>::value &&
    has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request>::value &&
    has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response>::value
  >
{
};

template<>
struct is_service<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "robotiq_2f_urcap_adapter/action/detail/move_gripper__traits.hpp"

namespace robotiq_2f_urcap_adapter
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveGripper_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveGripper_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveGripper_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

namespace rosidl_generator_traits
{

[[deprecated("use robotiq_2f_urcap_adapter::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  robotiq_2f_urcap_adapter::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robotiq_2f_urcap_adapter::action::to_yaml() instead")]]
inline std::string to_yaml(const robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage & msg)
{
  return robotiq_2f_urcap_adapter::action::to_yaml(msg);
}

template<>
inline const char * data_type<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage>()
{
  return "robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage";
}

template<>
inline const char * name<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage>()
{
  return "robotiq_2f_urcap_adapter/action/MoveGripper_FeedbackMessage";
}

template<>
struct has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<robotiq_2f_urcap_adapter::action::MoveGripper>
  : std::true_type
{
};

template<>
struct is_action_goal<robotiq_2f_urcap_adapter::action::MoveGripper_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<robotiq_2f_urcap_adapter::action::MoveGripper_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__TRAITS_HPP_
