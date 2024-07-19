// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotiq_2f_urcap_adapter:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_
#define ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GripperCommand in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__msg__GripperCommand
{
  double position;
  double max_effort;
  double max_speed;
} robotiq_2f_urcap_adapter__msg__GripperCommand;

// Struct for a sequence of robotiq_2f_urcap_adapter__msg__GripperCommand.
typedef struct robotiq_2f_urcap_adapter__msg__GripperCommand__Sequence
{
  robotiq_2f_urcap_adapter__msg__GripperCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__msg__GripperCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_
