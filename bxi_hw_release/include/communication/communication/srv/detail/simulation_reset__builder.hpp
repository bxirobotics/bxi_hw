// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:srv/SimulationReset.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__BUILDER_HPP_
#define COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/srv/detail/simulation_reset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace srv
{

namespace builder
{

class Init_SimulationReset_Request_joint_state
{
public:
  explicit Init_SimulationReset_Request_joint_state(::communication::srv::SimulationReset_Request & msg)
  : msg_(msg)
  {}
  ::communication::srv::SimulationReset_Request joint_state(::communication::srv::SimulationReset_Request::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::srv::SimulationReset_Request msg_;
};

class Init_SimulationReset_Request_base_pose
{
public:
  explicit Init_SimulationReset_Request_base_pose(::communication::srv::SimulationReset_Request & msg)
  : msg_(msg)
  {}
  Init_SimulationReset_Request_joint_state base_pose(::communication::srv::SimulationReset_Request::_base_pose_type arg)
  {
    msg_.base_pose = std::move(arg);
    return Init_SimulationReset_Request_joint_state(msg_);
  }

private:
  ::communication::srv::SimulationReset_Request msg_;
};

class Init_SimulationReset_Request_header
{
public:
  Init_SimulationReset_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SimulationReset_Request_base_pose header(::communication::srv::SimulationReset_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SimulationReset_Request_base_pose(msg_);
  }

private:
  ::communication::srv::SimulationReset_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::srv::SimulationReset_Request>()
{
  return communication::srv::builder::Init_SimulationReset_Request_header();
}

}  // namespace communication


namespace communication
{

namespace srv
{

namespace builder
{

class Init_SimulationReset_Response_is_success
{
public:
  Init_SimulationReset_Response_is_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication::srv::SimulationReset_Response is_success(::communication::srv::SimulationReset_Response::_is_success_type arg)
  {
    msg_.is_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::srv::SimulationReset_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::srv::SimulationReset_Response>()
{
  return communication::srv::builder::Init_SimulationReset_Response_is_success();
}

}  // namespace communication

#endif  // COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__BUILDER_HPP_
