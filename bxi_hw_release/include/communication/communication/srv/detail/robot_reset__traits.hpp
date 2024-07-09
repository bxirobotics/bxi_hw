// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication:srv/RobotReset.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__ROBOT_RESET__TRAITS_HPP_
#define COMMUNICATION__SRV__DETAIL__ROBOT_RESET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication/srv/detail/robot_reset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace communication
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotReset_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: reset_step
  {
    out << "reset_step: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_step, out);
    out << ", ";
  }

  // member: release
  {
    out << "release: ";
    rosidl_generator_traits::value_to_yaml(msg.release, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotReset_Request & msg,
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

  // member: reset_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_step: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_step, out);
    out << "\n";
  }

  // member: release
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "release: ";
    rosidl_generator_traits::value_to_yaml(msg.release, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotReset_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace communication

namespace rosidl_generator_traits
{

[[deprecated("use communication::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication::srv::RobotReset_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication::srv::RobotReset_Request & msg)
{
  return communication::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication::srv::RobotReset_Request>()
{
  return "communication::srv::RobotReset_Request";
}

template<>
inline const char * name<communication::srv::RobotReset_Request>()
{
  return "communication/srv/RobotReset_Request";
}

template<>
struct has_fixed_size<communication::srv::RobotReset_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<communication::srv::RobotReset_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<communication::srv::RobotReset_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace communication
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotReset_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_success
  {
    out << "is_success: ";
    rosidl_generator_traits::value_to_yaml(msg.is_success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotReset_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_success: ";
    rosidl_generator_traits::value_to_yaml(msg.is_success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotReset_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace communication

namespace rosidl_generator_traits
{

[[deprecated("use communication::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication::srv::RobotReset_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication::srv::RobotReset_Response & msg)
{
  return communication::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication::srv::RobotReset_Response>()
{
  return "communication::srv::RobotReset_Response";
}

template<>
inline const char * name<communication::srv::RobotReset_Response>()
{
  return "communication/srv/RobotReset_Response";
}

template<>
struct has_fixed_size<communication::srv::RobotReset_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<communication::srv::RobotReset_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<communication::srv::RobotReset_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication::srv::RobotReset>()
{
  return "communication::srv::RobotReset";
}

template<>
inline const char * name<communication::srv::RobotReset>()
{
  return "communication/srv/RobotReset";
}

template<>
struct has_fixed_size<communication::srv::RobotReset>
  : std::integral_constant<
    bool,
    has_fixed_size<communication::srv::RobotReset_Request>::value &&
    has_fixed_size<communication::srv::RobotReset_Response>::value
  >
{
};

template<>
struct has_bounded_size<communication::srv::RobotReset>
  : std::integral_constant<
    bool,
    has_bounded_size<communication::srv::RobotReset_Request>::value &&
    has_bounded_size<communication::srv::RobotReset_Response>::value
  >
{
};

template<>
struct is_service<communication::srv::RobotReset>
  : std::true_type
{
};

template<>
struct is_service_request<communication::srv::RobotReset_Request>
  : std::true_type
{
};

template<>
struct is_service_response<communication::srv::RobotReset_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION__SRV__DETAIL__ROBOT_RESET__TRAITS_HPP_
