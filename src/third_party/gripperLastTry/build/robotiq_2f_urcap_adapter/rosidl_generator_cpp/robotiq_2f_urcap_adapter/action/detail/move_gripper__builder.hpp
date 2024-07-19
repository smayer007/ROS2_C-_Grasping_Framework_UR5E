// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robotiq_2f_urcap_adapter:action/MoveGripper.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__BUILDER_HPP_
#define ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robotiq_2f_urcap_adapter/action/detail/move_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robotiq_2f_urcap_adapter
{

namespace action
{

namespace builder
{

class Init_MoveGripper_Goal_mode
{
public:
  Init_MoveGripper_Goal_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_2f_urcap_adapter::action::MoveGripper_Goal mode(::robotiq_2f_urcap_adapter::action::MoveGripper_Goal::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_2f_urcap_adapter::action::MoveGripper_Goal>()
{
  return robotiq_2f_urcap_adapter::action::builder::Init_MoveGripper_Goal_mode();
}

}  // namespace robotiq_2f_urcap_adapter


namespace robotiq_2f_urcap_adapter
{

namespace action
{

namespace builder
{

class Init_MoveGripper_Result_message
{
public:
  explicit Init_MoveGripper_Result_message(::robotiq_2f_urcap_adapter::action::MoveGripper_Result & msg)
  : msg_(msg)
  {}
  ::robotiq_2f_urcap_adapter::action::MoveGripper_Result message(::robotiq_2f_urcap_adapter::action::MoveGripper_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_Result msg_;
};

class Init_MoveGripper_Result_success
{
public:
  Init_MoveGripper_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGripper_Result_message success(::robotiq_2f_urcap_adapter::action::MoveGripper_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveGripper_Result_message(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_2f_urcap_adapter::action::MoveGripper_Result>()
{
  return robotiq_2f_urcap_adapter::action::builder::Init_MoveGripper_Result_success();
}

}  // namespace robotiq_2f_urcap_adapter


namespace robotiq_2f_urcap_adapter
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_2f_urcap_adapter::action::MoveGripper_Feedback>()
{
  return ::robotiq_2f_urcap_adapter::action::MoveGripper_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robotiq_2f_urcap_adapter


namespace robotiq_2f_urcap_adapter
{

namespace action
{

namespace builder
{

class Init_MoveGripper_SendGoal_Request_goal
{
public:
  explicit Init_MoveGripper_SendGoal_Request_goal(::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request goal(::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request msg_;
};

class Init_MoveGripper_SendGoal_Request_goal_id
{
public:
  Init_MoveGripper_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGripper_SendGoal_Request_goal goal_id(::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveGripper_SendGoal_Request_goal(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request>()
{
  return robotiq_2f_urcap_adapter::action::builder::Init_MoveGripper_SendGoal_Request_goal_id();
}

}  // namespace robotiq_2f_urcap_adapter


namespace robotiq_2f_urcap_adapter
{

namespace action
{

namespace builder
{

class Init_MoveGripper_SendGoal_Response_stamp
{
public:
  explicit Init_MoveGripper_SendGoal_Response_stamp(::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response stamp(::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response msg_;
};

class Init_MoveGripper_SendGoal_Response_accepted
{
public:
  Init_MoveGripper_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGripper_SendGoal_Response_stamp accepted(::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveGripper_SendGoal_Response_stamp(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response>()
{
  return robotiq_2f_urcap_adapter::action::builder::Init_MoveGripper_SendGoal_Response_accepted();
}

}  // namespace robotiq_2f_urcap_adapter


namespace robotiq_2f_urcap_adapter
{

namespace action
{

namespace builder
{

class Init_MoveGripper_GetResult_Request_goal_id
{
public:
  Init_MoveGripper_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request goal_id(::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request>()
{
  return robotiq_2f_urcap_adapter::action::builder::Init_MoveGripper_GetResult_Request_goal_id();
}

}  // namespace robotiq_2f_urcap_adapter


namespace robotiq_2f_urcap_adapter
{

namespace action
{

namespace builder
{

class Init_MoveGripper_GetResult_Response_result
{
public:
  explicit Init_MoveGripper_GetResult_Response_result(::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response result(::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response msg_;
};

class Init_MoveGripper_GetResult_Response_status
{
public:
  Init_MoveGripper_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGripper_GetResult_Response_result status(::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveGripper_GetResult_Response_result(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response>()
{
  return robotiq_2f_urcap_adapter::action::builder::Init_MoveGripper_GetResult_Response_status();
}

}  // namespace robotiq_2f_urcap_adapter


namespace robotiq_2f_urcap_adapter
{

namespace action
{

namespace builder
{

class Init_MoveGripper_FeedbackMessage_feedback
{
public:
  explicit Init_MoveGripper_FeedbackMessage_feedback(::robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage feedback(::robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage msg_;
};

class Init_MoveGripper_FeedbackMessage_goal_id
{
public:
  Init_MoveGripper_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGripper_FeedbackMessage_feedback goal_id(::robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveGripper_FeedbackMessage_feedback(msg_);
  }

private:
  ::robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage>()
{
  return robotiq_2f_urcap_adapter::action::builder::Init_MoveGripper_FeedbackMessage_goal_id();
}

}  // namespace robotiq_2f_urcap_adapter

#endif  // ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__BUILDER_HPP_
