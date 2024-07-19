// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotiq_2f_urcap_adapter:action/MoveGripper.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__STRUCT_HPP_
#define ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Goal __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Goal __declspec(deprecated)
#endif

namespace robotiq_2f_urcap_adapter
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGripper_Goal_
{
  using Type = MoveGripper_Goal_<ContainerAllocator>;

  explicit MoveGripper_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit MoveGripper_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OPEN_GRIPPER =
    0u;
  static constexpr uint8_t CLOSE_GRIPPER =
    1u;

  // pointer types
  using RawPtr =
    robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Goal
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Goal
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGripper_Goal_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGripper_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGripper_Goal_

// alias to use template instance with default allocator
using MoveGripper_Goal =
  robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MoveGripper_Goal_<ContainerAllocator>::OPEN_GRIPPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MoveGripper_Goal_<ContainerAllocator>::CLOSE_GRIPPER;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter


#ifndef _WIN32
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Result __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Result __declspec(deprecated)
#endif

namespace robotiq_2f_urcap_adapter
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGripper_Result_
{
  using Type = MoveGripper_Result_<ContainerAllocator>;

  explicit MoveGripper_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit MoveGripper_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Result
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Result
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGripper_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGripper_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGripper_Result_

// alias to use template instance with default allocator
using MoveGripper_Result =
  robotiq_2f_urcap_adapter::action::MoveGripper_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter


#ifndef _WIN32
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Feedback __declspec(deprecated)
#endif

namespace robotiq_2f_urcap_adapter
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGripper_Feedback_
{
  using Type = MoveGripper_Feedback_<ContainerAllocator>;

  explicit MoveGripper_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MoveGripper_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Feedback
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_Feedback
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGripper_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGripper_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGripper_Feedback_

// alias to use template instance with default allocator
using MoveGripper_Feedback =
  robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "robotiq_2f_urcap_adapter/action/detail/move_gripper__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Request __declspec(deprecated)
#endif

namespace robotiq_2f_urcap_adapter
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGripper_SendGoal_Request_
{
  using Type = MoveGripper_SendGoal_Request_<ContainerAllocator>;

  explicit MoveGripper_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveGripper_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const robotiq_2f_urcap_adapter::action::MoveGripper_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Request
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Request
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGripper_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGripper_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGripper_SendGoal_Request_

// alias to use template instance with default allocator
using MoveGripper_SendGoal_Request =
  robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Response __declspec(deprecated)
#endif

namespace robotiq_2f_urcap_adapter
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGripper_SendGoal_Response_
{
  using Type = MoveGripper_SendGoal_Response_<ContainerAllocator>;

  explicit MoveGripper_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveGripper_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Response
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_SendGoal_Response
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGripper_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGripper_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGripper_SendGoal_Response_

// alias to use template instance with default allocator
using MoveGripper_SendGoal_Response =
  robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

namespace robotiq_2f_urcap_adapter
{

namespace action
{

struct MoveGripper_SendGoal
{
  using Request = robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Request;
  using Response = robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal_Response;
};

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Request __declspec(deprecated)
#endif

namespace robotiq_2f_urcap_adapter
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGripper_GetResult_Request_
{
  using Type = MoveGripper_GetResult_Request_<ContainerAllocator>;

  explicit MoveGripper_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveGripper_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Request
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Request
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGripper_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGripper_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGripper_GetResult_Request_

// alias to use template instance with default allocator
using MoveGripper_GetResult_Request =
  robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter


// Include directives for member types
// Member 'result'
// already included above
// #include "robotiq_2f_urcap_adapter/action/detail/move_gripper__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Response __declspec(deprecated)
#endif

namespace robotiq_2f_urcap_adapter
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGripper_GetResult_Response_
{
  using Type = MoveGripper_GetResult_Response_<ContainerAllocator>;

  explicit MoveGripper_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveGripper_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const robotiq_2f_urcap_adapter::action::MoveGripper_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Response
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_GetResult_Response
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGripper_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGripper_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGripper_GetResult_Response_

// alias to use template instance with default allocator
using MoveGripper_GetResult_Response =
  robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

namespace robotiq_2f_urcap_adapter
{

namespace action
{

struct MoveGripper_GetResult
{
  using Request = robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Request;
  using Response = robotiq_2f_urcap_adapter::action::MoveGripper_GetResult_Response;
};

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "robotiq_2f_urcap_adapter/action/detail/move_gripper__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_FeedbackMessage __declspec(deprecated)
#endif

namespace robotiq_2f_urcap_adapter
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveGripper_FeedbackMessage_
{
  using Type = MoveGripper_FeedbackMessage_<ContainerAllocator>;

  explicit MoveGripper_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveGripper_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const robotiq_2f_urcap_adapter::action::MoveGripper_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_FeedbackMessage
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_2f_urcap_adapter__action__MoveGripper_FeedbackMessage
    std::shared_ptr<robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveGripper_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveGripper_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveGripper_FeedbackMessage_

// alias to use template instance with default allocator
using MoveGripper_FeedbackMessage =
  robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace robotiq_2f_urcap_adapter
{

namespace action
{

struct MoveGripper
{
  /// The goal message defined in the action definition.
  using Goal = robotiq_2f_urcap_adapter::action::MoveGripper_Goal;
  /// The result message defined in the action definition.
  using Result = robotiq_2f_urcap_adapter::action::MoveGripper_Result;
  /// The feedback message defined in the action definition.
  using Feedback = robotiq_2f_urcap_adapter::action::MoveGripper_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = robotiq_2f_urcap_adapter::action::MoveGripper_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = robotiq_2f_urcap_adapter::action::MoveGripper_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = robotiq_2f_urcap_adapter::action::MoveGripper_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveGripper MoveGripper;

}  // namespace action

}  // namespace robotiq_2f_urcap_adapter

#endif  // ROBOTIQ_2F_URCAP_ADAPTER__ACTION__DETAIL__MOVE_GRIPPER__STRUCT_HPP_
