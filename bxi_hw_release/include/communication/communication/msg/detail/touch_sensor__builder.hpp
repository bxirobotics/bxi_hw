// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/TouchSensor.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__TOUCH_SENSOR__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__TOUCH_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/touch_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_TouchSensor_value
{
public:
  explicit Init_TouchSensor_value(::communication::msg::TouchSensor & msg)
  : msg_(msg)
  {}
  ::communication::msg::TouchSensor value(::communication::msg::TouchSensor::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::TouchSensor msg_;
};

class Init_TouchSensor_header
{
public:
  Init_TouchSensor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TouchSensor_value header(::communication::msg::TouchSensor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TouchSensor_value(msg_);
  }

private:
  ::communication::msg::TouchSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::TouchSensor>()
{
  return communication::msg::builder::Init_TouchSensor_header();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__TOUCH_SENSOR__BUILDER_HPP_
