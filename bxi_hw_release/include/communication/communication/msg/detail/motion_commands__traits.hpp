// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication:msg/MotionCommands.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__TRAITS_HPP_
#define COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication/msg/detail/motion_commands__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'vel_des'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace communication
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionCommands & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vel_des
  {
    out << "vel_des: ";
    to_flow_style_yaml(msg.vel_des, out);
    out << ", ";
  }

  // member: height_des
  {
    out << "height_des: ";
    rosidl_generator_traits::value_to_yaml(msg.height_des, out);
    out << ", ";
  }

  // member: yawdot_des
  {
    out << "yawdot_des: ";
    rosidl_generator_traits::value_to_yaml(msg.yawdot_des, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: vel_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_des:\n";
    to_block_style_yaml(msg.vel_des, out, indentation + 2);
  }

  // member: height_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_des: ";
    rosidl_generator_traits::value_to_yaml(msg.height_des, out);
    out << "\n";
  }

  // member: yawdot_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawdot_des: ";
    rosidl_generator_traits::value_to_yaml(msg.yawdot_des, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionCommands & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace communication

namespace rosidl_generator_traits
{

[[deprecated("use communication::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication::msg::MotionCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::msg::to_yaml() instead")]]
inline std::string to_yaml(const communication::msg::MotionCommands & msg)
{
  return communication::msg::to_yaml(msg);
}

template<>
inline const char * data_type<communication::msg::MotionCommands>()
{
  return "communication::msg::MotionCommands";
}

template<>
inline const char * name<communication::msg::MotionCommands>()
{
  return "communication/msg/MotionCommands";
}

template<>
struct has_fixed_size<communication::msg::MotionCommands>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<communication::msg::MotionCommands>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<communication::msg::MotionCommands>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__TRAITS_HPP_
