// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication:srv/RobotReset.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__ROBOT_RESET__STRUCT_HPP_
#define COMMUNICATION__SRV__DETAIL__ROBOT_RESET__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__communication__srv__RobotReset_Request __attribute__((deprecated))
#else
# define DEPRECATED__communication__srv__RobotReset_Request __declspec(deprecated)
#endif

namespace communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotReset_Request_
{
  using Type = RobotReset_Request_<ContainerAllocator>;

  explicit RobotReset_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_step = 0l;
      this->release = false;
    }
  }

  explicit RobotReset_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reset_step = 0l;
      this->release = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _reset_step_type =
    int32_t;
  _reset_step_type reset_step;
  using _release_type =
    bool;
  _release_type release;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__reset_step(
    const int32_t & _arg)
  {
    this->reset_step = _arg;
    return *this;
  }
  Type & set__release(
    const bool & _arg)
  {
    this->release = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::srv::RobotReset_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::srv::RobotReset_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::srv::RobotReset_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::srv::RobotReset_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::srv::RobotReset_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::srv::RobotReset_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::srv::RobotReset_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::srv::RobotReset_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::srv::RobotReset_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::srv::RobotReset_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__srv__RobotReset_Request
    std::shared_ptr<communication::srv::RobotReset_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__srv__RobotReset_Request
    std::shared_ptr<communication::srv::RobotReset_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotReset_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->reset_step != other.reset_step) {
      return false;
    }
    if (this->release != other.release) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotReset_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotReset_Request_

// alias to use template instance with default allocator
using RobotReset_Request =
  communication::srv::RobotReset_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication


#ifndef _WIN32
# define DEPRECATED__communication__srv__RobotReset_Response __attribute__((deprecated))
#else
# define DEPRECATED__communication__srv__RobotReset_Response __declspec(deprecated)
#endif

namespace communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotReset_Response_
{
  using Type = RobotReset_Response_<ContainerAllocator>;

  explicit RobotReset_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_success = false;
    }
  }

  explicit RobotReset_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_success = false;
    }
  }

  // field types and members
  using _is_success_type =
    bool;
  _is_success_type is_success;

  // setters for named parameter idiom
  Type & set__is_success(
    const bool & _arg)
  {
    this->is_success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::srv::RobotReset_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::srv::RobotReset_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::srv::RobotReset_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::srv::RobotReset_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::srv::RobotReset_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::srv::RobotReset_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::srv::RobotReset_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::srv::RobotReset_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::srv::RobotReset_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::srv::RobotReset_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__srv__RobotReset_Response
    std::shared_ptr<communication::srv::RobotReset_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__srv__RobotReset_Response
    std::shared_ptr<communication::srv::RobotReset_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotReset_Response_ & other) const
  {
    if (this->is_success != other.is_success) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotReset_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotReset_Response_

// alias to use template instance with default allocator
using RobotReset_Response =
  communication::srv::RobotReset_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication

namespace communication
{

namespace srv
{

struct RobotReset
{
  using Request = communication::srv::RobotReset_Request;
  using Response = communication::srv::RobotReset_Response;
};

}  // namespace srv

}  // namespace communication

#endif  // COMMUNICATION__SRV__DETAIL__ROBOT_RESET__STRUCT_HPP_
