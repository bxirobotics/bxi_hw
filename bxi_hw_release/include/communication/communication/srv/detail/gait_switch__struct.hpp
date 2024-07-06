// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication:srv/GaitSwitch.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__GAIT_SWITCH__STRUCT_HPP_
#define COMMUNICATION__SRV__DETAIL__GAIT_SWITCH__STRUCT_HPP_

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
# define DEPRECATED__communication__srv__GaitSwitch_Request __attribute__((deprecated))
#else
# define DEPRECATED__communication__srv__GaitSwitch_Request __declspec(deprecated)
#endif

namespace communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GaitSwitch_Request_
{
  using Type = GaitSwitch_Request_<ContainerAllocator>;

  explicit GaitSwitch_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gait_name = "";
    }
  }

  explicit GaitSwitch_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gait_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gait_name = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gait_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gait_name_type gait_name;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gait_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gait_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::srv::GaitSwitch_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::srv::GaitSwitch_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::srv::GaitSwitch_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::srv::GaitSwitch_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::srv::GaitSwitch_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::srv::GaitSwitch_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::srv::GaitSwitch_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::srv::GaitSwitch_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::srv::GaitSwitch_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::srv::GaitSwitch_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__srv__GaitSwitch_Request
    std::shared_ptr<communication::srv::GaitSwitch_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__srv__GaitSwitch_Request
    std::shared_ptr<communication::srv::GaitSwitch_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GaitSwitch_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gait_name != other.gait_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GaitSwitch_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GaitSwitch_Request_

// alias to use template instance with default allocator
using GaitSwitch_Request =
  communication::srv::GaitSwitch_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication


#ifndef _WIN32
# define DEPRECATED__communication__srv__GaitSwitch_Response __attribute__((deprecated))
#else
# define DEPRECATED__communication__srv__GaitSwitch_Response __declspec(deprecated)
#endif

namespace communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GaitSwitch_Response_
{
  using Type = GaitSwitch_Response_<ContainerAllocator>;

  explicit GaitSwitch_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_success = false;
    }
  }

  explicit GaitSwitch_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    communication::srv::GaitSwitch_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::srv::GaitSwitch_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::srv::GaitSwitch_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::srv::GaitSwitch_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::srv::GaitSwitch_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::srv::GaitSwitch_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::srv::GaitSwitch_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::srv::GaitSwitch_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::srv::GaitSwitch_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::srv::GaitSwitch_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__srv__GaitSwitch_Response
    std::shared_ptr<communication::srv::GaitSwitch_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__srv__GaitSwitch_Response
    std::shared_ptr<communication::srv::GaitSwitch_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GaitSwitch_Response_ & other) const
  {
    if (this->is_success != other.is_success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GaitSwitch_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GaitSwitch_Response_

// alias to use template instance with default allocator
using GaitSwitch_Response =
  communication::srv::GaitSwitch_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication

namespace communication
{

namespace srv
{

struct GaitSwitch
{
  using Request = communication::srv::GaitSwitch_Request;
  using Response = communication::srv::GaitSwitch_Response;
};

}  // namespace srv

}  // namespace communication

#endif  // COMMUNICATION__SRV__DETAIL__GAIT_SWITCH__STRUCT_HPP_
