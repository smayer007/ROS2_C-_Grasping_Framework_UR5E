// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robotiq_2f_urcap_adapter:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robotiq_2f_urcap_adapter/msg/detail/gripper_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robotiq_2f_urcap_adapter
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GripperCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robotiq_2f_urcap_adapter::msg::GripperCommand(_init);
}

void GripperCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robotiq_2f_urcap_adapter::msg::GripperCommand *>(message_memory);
  typed_message->~GripperCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GripperCommand_message_member_array[3] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_2f_urcap_adapter::msg::GripperCommand, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_effort",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_2f_urcap_adapter::msg::GripperCommand, max_effort),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robotiq_2f_urcap_adapter::msg::GripperCommand, max_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GripperCommand_message_members = {
  "robotiq_2f_urcap_adapter::msg",  // message namespace
  "GripperCommand",  // message name
  3,  // number of fields
  sizeof(robotiq_2f_urcap_adapter::msg::GripperCommand),
  GripperCommand_message_member_array,  // message members
  GripperCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GripperCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GripperCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robotiq_2f_urcap_adapter


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotiq_2f_urcap_adapter::msg::GripperCommand>()
{
  return &::robotiq_2f_urcap_adapter::msg::rosidl_typesupport_introspection_cpp::GripperCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotiq_2f_urcap_adapter, msg, GripperCommand)() {
  return &::robotiq_2f_urcap_adapter::msg::rosidl_typesupport_introspection_cpp::GripperCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
