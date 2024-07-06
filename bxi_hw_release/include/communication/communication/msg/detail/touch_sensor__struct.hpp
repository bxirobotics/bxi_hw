// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication:msg/TouchSensor.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__TOUCH_SENSOR__STRUCT_HPP_
#define COMMUNICATION__MSG__DETAIL__TOUCH_SENSOR__STRUCT_HPP_

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
# define DEPRECATED__communication__msg__TouchSensor __attribute__((deprecated))
#else
# define DEPRECATED__communication__msg__TouchSensor __declspec(deprecated)
#endif

namespace communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TouchSensor_
{
  using Type = TouchSensor_<ContainerAllocator>;

  explicit TouchSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TouchSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _value_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__value(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::msg::TouchSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::msg::TouchSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::msg::TouchSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::msg::TouchSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::msg::TouchSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::msg::TouchSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::msg::TouchSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::msg::TouchSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::msg::TouchSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::msg::TouchSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__msg__TouchSensor
    std::shared_ptr<communication::msg::TouchSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__msg__TouchSensor
    std::shared_ptr<communication::msg::TouchSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TouchSensor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TouchSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TouchSensor_

// alias to use template instance with default allocator
using TouchSensor =
  communication::msg::TouchSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__TOUCH_SENSOR__STRUCT_HPP_
