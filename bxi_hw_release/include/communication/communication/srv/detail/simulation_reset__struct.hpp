// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication:srv/SimulationReset.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__STRUCT_HPP_
#define COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__STRUCT_HPP_

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
// Member 'base_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__communication__srv__SimulationReset_Request __attribute__((deprecated))
#else
# define DEPRECATED__communication__srv__SimulationReset_Request __declspec(deprecated)
#endif

namespace communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimulationReset_Request_
{
  using Type = SimulationReset_Request_<ContainerAllocator>;

  explicit SimulationReset_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    base_pose(_init),
    joint_state(_init)
  {
    (void)_init;
  }

  explicit SimulationReset_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    base_pose(_alloc, _init),
    joint_state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _base_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _base_pose_type base_pose;
  using _joint_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_state_type joint_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__base_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->base_pose = _arg;
    return *this;
  }
  Type & set__joint_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication::srv::SimulationReset_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::srv::SimulationReset_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::srv::SimulationReset_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::srv::SimulationReset_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::srv::SimulationReset_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::srv::SimulationReset_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::srv::SimulationReset_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::srv::SimulationReset_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::srv::SimulationReset_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::srv::SimulationReset_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__srv__SimulationReset_Request
    std::shared_ptr<communication::srv::SimulationReset_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__srv__SimulationReset_Request
    std::shared_ptr<communication::srv::SimulationReset_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimulationReset_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->base_pose != other.base_pose) {
      return false;
    }
    if (this->joint_state != other.joint_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimulationReset_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimulationReset_Request_

// alias to use template instance with default allocator
using SimulationReset_Request =
  communication::srv::SimulationReset_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication


#ifndef _WIN32
# define DEPRECATED__communication__srv__SimulationReset_Response __attribute__((deprecated))
#else
# define DEPRECATED__communication__srv__SimulationReset_Response __declspec(deprecated)
#endif

namespace communication
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SimulationReset_Response_
{
  using Type = SimulationReset_Response_<ContainerAllocator>;

  explicit SimulationReset_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_success = false;
    }
  }

  explicit SimulationReset_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    communication::srv::SimulationReset_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication::srv::SimulationReset_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication::srv::SimulationReset_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication::srv::SimulationReset_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication::srv::SimulationReset_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication::srv::SimulationReset_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication::srv::SimulationReset_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication::srv::SimulationReset_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication::srv::SimulationReset_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication::srv::SimulationReset_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication__srv__SimulationReset_Response
    std::shared_ptr<communication::srv::SimulationReset_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication__srv__SimulationReset_Response
    std::shared_ptr<communication::srv::SimulationReset_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimulationReset_Response_ & other) const
  {
    if (this->is_success != other.is_success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimulationReset_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimulationReset_Response_

// alias to use template instance with default allocator
using SimulationReset_Response =
  communication::srv::SimulationReset_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace communication

namespace communication
{

namespace srv
{

struct SimulationReset
{
  using Request = communication::srv::SimulationReset_Request;
  using Response = communication::srv::SimulationReset_Response;
};

}  // namespace srv

}  // namespace communication

#endif  // COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__STRUCT_HPP_
