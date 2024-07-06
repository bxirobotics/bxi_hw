// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/ActuatorCmds.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__ACTUATOR_CMDS__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__ACTUATOR_CMDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/actuator_cmds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_ActuatorCmds_torque
{
public:
  explicit Init_ActuatorCmds_torque(::communication::msg::ActuatorCmds & msg)
  : msg_(msg)
  {}
  ::communication::msg::ActuatorCmds torque(::communication::msg::ActuatorCmds::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::ActuatorCmds msg_;
};

class Init_ActuatorCmds_vel
{
public:
  explicit Init_ActuatorCmds_vel(::communication::msg::ActuatorCmds & msg)
  : msg_(msg)
  {}
  Init_ActuatorCmds_torque vel(::communication::msg::ActuatorCmds::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_ActuatorCmds_torque(msg_);
  }

private:
  ::communication::msg::ActuatorCmds msg_;
};

class Init_ActuatorCmds_kd
{
public:
  explicit Init_ActuatorCmds_kd(::communication::msg::ActuatorCmds & msg)
  : msg_(msg)
  {}
  Init_ActuatorCmds_vel kd(::communication::msg::ActuatorCmds::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_ActuatorCmds_vel(msg_);
  }

private:
  ::communication::msg::ActuatorCmds msg_;
};

class Init_ActuatorCmds_pos
{
public:
  explicit Init_ActuatorCmds_pos(::communication::msg::ActuatorCmds & msg)
  : msg_(msg)
  {}
  Init_ActuatorCmds_kd pos(::communication::msg::ActuatorCmds::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_ActuatorCmds_kd(msg_);
  }

private:
  ::communication::msg::ActuatorCmds msg_;
};

class Init_ActuatorCmds_kp
{
public:
  explicit Init_ActuatorCmds_kp(::communication::msg::ActuatorCmds & msg)
  : msg_(msg)
  {}
  Init_ActuatorCmds_pos kp(::communication::msg::ActuatorCmds::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_ActuatorCmds_pos(msg_);
  }

private:
  ::communication::msg::ActuatorCmds msg_;
};

class Init_ActuatorCmds_actuators_name
{
public:
  explicit Init_ActuatorCmds_actuators_name(::communication::msg::ActuatorCmds & msg)
  : msg_(msg)
  {}
  Init_ActuatorCmds_kp actuators_name(::communication::msg::ActuatorCmds::_actuators_name_type arg)
  {
    msg_.actuators_name = std::move(arg);
    return Init_ActuatorCmds_kp(msg_);
  }

private:
  ::communication::msg::ActuatorCmds msg_;
};

class Init_ActuatorCmds_header
{
public:
  Init_ActuatorCmds_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorCmds_actuators_name header(::communication::msg::ActuatorCmds::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActuatorCmds_actuators_name(msg_);
  }

private:
  ::communication::msg::ActuatorCmds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::ActuatorCmds>()
{
  return communication::msg::builder::Init_ActuatorCmds_header();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__ACTUATOR_CMDS__BUILDER_HPP_
