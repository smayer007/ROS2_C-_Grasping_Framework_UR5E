// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robotiq_2f_urcap_adapter:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_HPP_
#define ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robotiq_2f_urcap_adapter__msg__GripperCommand __attribute__((deprecated))
#else
# define DEPRECATED__robotiq_2f_urcap_adapter__msg__GripperCommand __declspec(deprecated)
#endif

namespace robotiq_2f_urcap_adapter
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperCommand_
{
  using Type = GripperCommand_<ContainerAllocator>;

  explicit GripperCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->max_effort = 0.0;
      this->max_speed = 0.0;
    }
  }

  explicit GripperCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->max_effort = 0.0;
      this->max_speed = 0.0;
    }
  }

  // field types and members
  using _position_type =
    double;
  _position_type position;
  using _max_effort_type =
    double;
  _max_effort_type max_effort;
  using _max_speed_type =
    double;
  _max_speed_type max_speed;

  // setters for named parameter idiom
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__max_effort(
    const double & _arg)
  {
    this->max_effort = _arg;
    return *this;
  }
  Type & set__max_speed(
    const double & _arg)
  {
    this->max_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robotiq_2f_urcap_adapter__msg__GripperCommand
    std::shared_ptr<robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robotiq_2f_urcap_adapter__msg__GripperCommand
    std::shared_ptr<robotiq_2f_urcap_adapter::msg::GripperCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCommand_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->max_effort != other.max_effort) {
      return false;
    }
    if (this->max_speed != other.max_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCommand_

// alias to use template instance with default allocator
using GripperCommand =
  robotiq_2f_urcap_adapter::msg::GripperCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robotiq_2f_urcap_adapter

#endif  // ROBOTIQ_2F_URCAP_ADAPTER__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_HPP_
