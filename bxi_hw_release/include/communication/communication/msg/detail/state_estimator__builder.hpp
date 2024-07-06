// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication:msg/StateEstimator.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__STATE_ESTIMATOR__BUILDER_HPP_
#define COMMUNICATION__MSG__DETAIL__STATE_ESTIMATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication/msg/detail/state_estimator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication
{

namespace msg
{

namespace builder
{

class Init_StateEstimator_qvel
{
public:
  explicit Init_StateEstimator_qvel(::communication::msg::StateEstimator & msg)
  : msg_(msg)
  {}
  ::communication::msg::StateEstimator qvel(::communication::msg::StateEstimator::_qvel_type arg)
  {
    msg_.qvel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication::msg::StateEstimator msg_;
};

class Init_StateEstimator_qpos
{
public:
  explicit Init_StateEstimator_qpos(::communication::msg::StateEstimator & msg)
  : msg_(msg)
  {}
  Init_StateEstimator_qvel qpos(::communication::msg::StateEstimator::_qpos_type arg)
  {
    msg_.qpos = std::move(arg);
    return Init_StateEstimator_qvel(msg_);
  }

private:
  ::communication::msg::StateEstimator msg_;
};

class Init_StateEstimator_header
{
public:
  Init_StateEstimator_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateEstimator_qpos header(::communication::msg::StateEstimator::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StateEstimator_qpos(msg_);
  }

private:
  ::communication::msg::StateEstimator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication::msg::StateEstimator>()
{
  return communication::msg::builder::Init_StateEstimator_header();
}

}  // namespace communication

#endif  // COMMUNICATION__MSG__DETAIL__STATE_ESTIMATOR__BUILDER_HPP_
