// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotiq_2f_urcap_adapter:action/MoveGripper.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__STRUCT_H_
#define ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OPEN_GRIPPER'.
enum
{
  robotiq_2f_urcap_adapter__action__MoveGripper_Goal__OPEN_GRIPPER = 0
};

/// Constant 'CLOSE_GRIPPER'.
enum
{
  robotiq_2f_urcap_adapter__action__MoveGripper_Goal__CLOSE_GRIPPER = 1
};

/// Struct defined in action/MoveGripper in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_Goal
{
  uint8_t mode;
} robotiq_2f_urcap_adapter__action__MoveGripper_Goal;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__MoveGripper_Goal.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_Goal__Sequence
{
  robotiq_2f_urcap_adapter__action__MoveGripper_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__MoveGripper_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveGripper in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_Result
{
  /// Result
  bool success;
  rosidl_runtime_c__String message;
} robotiq_2f_urcap_adapter__action__MoveGripper_Result;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__MoveGripper_Result.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_Result__Sequence
{
  robotiq_2f_urcap_adapter__action__MoveGripper_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__MoveGripper_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveGripper in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} robotiq_2f_urcap_adapter__action__MoveGripper_Feedback;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__MoveGripper_Feedback.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_Feedback__Sequence
{
  robotiq_2f_urcap_adapter__action__MoveGripper_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__MoveGripper_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robotiq_2f_urcap_adapter/action/detail/move_gripper__struct.h"

/// Struct defined in action/MoveGripper in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robotiq_2f_urcap_adapter__action__MoveGripper_Goal goal;
} robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Request;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Request.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Request__Sequence
{
  robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveGripper in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Response;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Response.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Response__Sequence
{
  robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveGripper in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Request;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Request.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Request__Sequence
{
  robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robotiq_2f_urcap_adapter/action/detail/move_gripper__struct.h"

/// Struct defined in action/MoveGripper in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Response
{
  int8_t status;
  robotiq_2f_urcap_adapter__action__MoveGripper_Result result;
} robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Response;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Response.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Response__Sequence
{
  robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robotiq_2f_urcap_adapter/action/detail/move_gripper__struct.h"

/// Struct defined in action/MoveGripper in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robotiq_2f_urcap_adapter__action__MoveGripper_Feedback feedback;
} robotiq_2f_urcap_adapter__action__MoveGripper_FeedbackMessage;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__MoveGripper_FeedbackMessage.
typedef struct robotiq_2f_urcap_adapter__action__MoveGripper_FeedbackMessage__Sequence
{
  robotiq_2f_urcap_adapter__action__MoveGripper_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__MoveGripper_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__STRUCT_H_
