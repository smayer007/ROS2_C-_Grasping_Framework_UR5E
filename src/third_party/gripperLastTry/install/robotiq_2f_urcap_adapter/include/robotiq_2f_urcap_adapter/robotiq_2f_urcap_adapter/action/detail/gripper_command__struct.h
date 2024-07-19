// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robotiq_2f_urcap_adapter:action/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__GRIPPER_COMMAND__STRUCT_H_
#define ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "robotiq_2f_urcap_adapter/msg/detail/gripper_command__struct.h"

/// Struct defined in action/GripperCommand in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_Goal
{
  robotiq_2f_urcap_adapter__msg__GripperCommand command;
} robotiq_2f_urcap_adapter__action__GripperCommand_Goal;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__GripperCommand_Goal.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_Goal__Sequence
{
  robotiq_2f_urcap_adapter__action__GripperCommand_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__GripperCommand_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/GripperCommand in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_Result
{
  /// The current gripper gap size (in meters)
  double position;
  /// The current effort exerted (in Newtons)
  double effort;
  /// The current speed used (in m/s)
  double speed;
  /// True iff the gripper is exerting max effort and not moving
  bool stalled;
  /// True iff the gripper position has reached the commanded setpoint
  bool reached_goal;
} robotiq_2f_urcap_adapter__action__GripperCommand_Result;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__GripperCommand_Result.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_Result__Sequence
{
  robotiq_2f_urcap_adapter__action__GripperCommand_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__GripperCommand_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/GripperCommand in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_Feedback
{
  /// The current gripper gap size (in meters)
  double position;
  /// The current effort exerted (in Newtons)
  double effort;
  /// The current speed used (in m/s)
  double speed;
  /// True iff the gripper is exerting max effort and not moving
  bool stalled;
  /// True iff the gripper position has reached the commanded setpoint
  bool reached_goal;
} robotiq_2f_urcap_adapter__action__GripperCommand_Feedback;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__GripperCommand_Feedback.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_Feedback__Sequence
{
  robotiq_2f_urcap_adapter__action__GripperCommand_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__GripperCommand_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robotiq_2f_urcap_adapter/action/detail/gripper_command__struct.h"

/// Struct defined in action/GripperCommand in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robotiq_2f_urcap_adapter__action__GripperCommand_Goal goal;
} robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Request;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Request.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Request__Sequence
{
  robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GripperCommand in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Response;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Response.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Response__Sequence
{
  robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__GripperCommand_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GripperCommand in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Request;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Request.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Request__Sequence
{
  robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robotiq_2f_urcap_adapter/action/detail/gripper_command__struct.h"

/// Struct defined in action/GripperCommand in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Response
{
  int8_t status;
  robotiq_2f_urcap_adapter__action__GripperCommand_Result result;
} robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Response;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Response.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Response__Sequence
{
  robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__GripperCommand_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robotiq_2f_urcap_adapter/action/detail/gripper_command__struct.h"

/// Struct defined in action/GripperCommand in the package robotiq_2f_urcap_adapter.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robotiq_2f_urcap_adapter__action__GripperCommand_Feedback feedback;
} robotiq_2f_urcap_adapter__action__GripperCommand_FeedbackMessage;

// Struct for a sequence of robotiq_2f_urcap_adapter__action__GripperCommand_FeedbackMessage.
typedef struct robotiq_2f_urcap_adapter__action__GripperCommand_FeedbackMessage__Sequence
{
  robotiq_2f_urcap_adapter__action__GripperCommand_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robotiq_2f_urcap_adapter__action__GripperCommand_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__GRIPPER_COMMAND__STRUCT_H_
