// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/MotionCommands.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/motion_commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_MotionCommands_mode
{
public:
  explicit Init_MotionCommands_mode(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  ::communication::msg::MotionCommands mode(::communication::msg::MotionCommands::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_yawdot_des
{
public:
  explicit Init_MotionCommands_yawdot_des(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_mode yawdot_des(::communication::msg::MotionCommands::_yawdot_des_type arg)
  {
    msg_.yawdot_des = std::move(arg);
    return Init_MotionCommands_mode(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_height_des
{
public:
  explicit Init_MotionCommands_height_des(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_yawdot_des height_des(::communication::msg::MotionCommands::_height_des_type arg)
  {
    msg_.height_des = std::move(arg);
    return Init_MotionCommands_yawdot_des(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_vel_des
{
public:
  explicit Init_MotionCommands_vel_des(::communication::msg::MotionCommands & msg)
  : msg_(msg)
  {}
  Init_MotionCommands_height_des vel_des(::communication::msg::MotionCommands::_vel_des_type arg)
  {
    msg_.vel_des = std::move(arg);
    return Init_MotionCommands_height_des(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

class Init_MotionCommands_header
{
public:
  Init_MotionCommands_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionCommands_vel_des header(::communication::msg::MotionCommands::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotionCommands_vel_des(msg_);
  }

private:
  ::communication::msg::MotionCommands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::MotionCommands>()
{
  return communication::msg::builder::Init_MotionCommands_header();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__BUILDER_HPP_
