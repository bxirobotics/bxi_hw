// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:srv/RobotReset.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__ROBOT_RESET__BUILDER_HPP_
#define COMMUNICATION__SRV__DETAIL__ROBOT_RESET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/srv/detail/robot_reset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace srv
{

namespace builder
{

class Init_RobotReset_Request_release
{
public:
  explicit Init_RobotReset_Request_release(::communication::srv::RobotReset_Request & msg)
  : msg_(msg)
  {}
  ::communication::srv::RobotReset_Request release(::communication::srv::RobotReset_Request::_release_type arg)
  {
    msg_.release = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::srv::RobotReset_Request msg_;
};

class Init_RobotReset_Request_reset_step
{
public:
  explicit Init_RobotReset_Request_reset_step(::communication::srv::RobotReset_Request & msg)
  : msg_(msg)
  {}
  Init_RobotReset_Request_release reset_step(::communication::srv::RobotReset_Request::_reset_step_type arg)
  {
    msg_.reset_step = std::move(arg);
    return Init_RobotReset_Request_release(msg_);
  }

private:
  ::communication::srv::RobotReset_Request msg_;
};

class Init_RobotReset_Request_header
{
public:
  Init_RobotReset_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotReset_Request_reset_step header(::communication::srv::RobotReset_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotReset_Request_reset_step(msg_);
  }

private:
  ::communication::srv::RobotReset_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::srv::RobotReset_Request>()
{
  return communication::srv::builder::Init_RobotReset_Request_header();
}

}  // namespace communication


namespace communication
{

namespace srv
{

namespace builder
{

class Init_RobotReset_Response_is_success
{
public:
  Init_RobotReset_Response_is_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::communication::srv::RobotReset_Response is_success(::communication::srv::RobotReset_Response::_is_success_type arg)
  {
    msg_.is_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::srv::RobotReset_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::srv::RobotReset_Response>()
{
  return communication::srv::builder::Init_RobotReset_Response_is_success();
}

}  // namespace communication

#endif  // COMMUNICATION__SRV__DETAIL__ROBOT_RESET__BUILDER_HPP_
