// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication:msg/MotionCommands.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__STRUCT_HPP_
#define COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'vel_des'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__communication__msg__MotionCommands __attribute__((deprecated))
#else
# define DEPRECATED__communication__msg__MotionCommands __declspec(deprecated)
#endif

namespace communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionCommands_
{
  using Type = MotionCommands_<ContainerAllocator>;

  explicit MotionCommands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    vel_des(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height_des = 0.0f;
      this->yawdot_des = 0.0f;
      this->mode = 0l;
    }
  }

  explicit MotionCommands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    vel_des(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height_des = 0.0f;
      this->yawdot_des = 0.0f;
      this->mode = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vel_des_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _vel_des_type vel_des;
  using _height_des_type =
    float;
  _height_des_type height_des;
  using _yawdot_des_type =
    float;
  _yawdot_des_type yawdot_des;
  using _mode_type =
    int32_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vel_des(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->vel_des = _arg;
    return *this;
  }
  Type & set__height_des(
    const float & _arg)
  {
    this->height_des = _arg;
    return *this;
  }
  Type & set__yawdot_des(
    const float & _arg)
  {
    this->yawdot_des = _arg;
    return *this;
  }
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::msg::MotionCommands_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::msg::MotionCommands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::msg::MotionCommands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::msg::MotionCommands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::msg::MotionCommands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::msg::MotionCommands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::msg::MotionCommands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::msg::MotionCommands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::msg::MotionCommands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::msg::MotionCommands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__msg__MotionCommands
    std::shared_ptr<communication::msg::MotionCommands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__msg__MotionCommands
    std::shared_ptr<communication::msg::MotionCommands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionCommands_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vel_des != other.vel_des) {
      return false;
    }
    if (this->height_des != other.height_des) {
      return false;
    }
    if (this->yawdot_des != other.yawdot_des) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionCommands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionCommands_

// alias to use template instance with default allocator
using MotionCommands =
  communication::msg::MotionCommands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__STRUCT_HPP_
