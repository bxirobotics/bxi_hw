// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication:srv/GaitSwitch.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__GAIT_SWITCH__TRAITS_HPP_
#define COMMUNICATION__SRV__DETAIL__GAIT_SWITCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication/srv/detail/gait_switch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace communication
{

namespace srv
{

inline void to_flow_style_yaml(
  const GaitSwitch_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: gait_name
  {
    out << "gait_name: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GaitSwitch_Request & msg,
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

  // member: gait_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_name: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GaitSwitch_Request & msg, bool use_flow_style = false)
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
  const communication::srv::GaitSwitch_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication::srv::GaitSwitch_Request & msg)
{
  return communication::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication::srv::GaitSwitch_Request>()
{
  return "communication::srv::GaitSwitch_Request";
}

template<>
inline const char * name<communication::srv::GaitSwitch_Request>()
{
  return "communication/srv/GaitSwitch_Request";
}

template<>
struct has_fixed_size<communication::srv::GaitSwitch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication::srv::GaitSwitch_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication::srv::GaitSwitch_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace communication
{

namespace srv
{

inline void to_flow_style_yaml(
  const GaitSwitch_Response & msg,
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
  const GaitSwitch_Response & msg,
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

inline std::string to_yaml(const GaitSwitch_Response & msg, bool use_flow_style = false)
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
  const communication::srv::GaitSwitch_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication::srv::GaitSwitch_Response & msg)
{
  return communication::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication::srv::GaitSwitch_Response>()
{
  return "communication::srv::GaitSwitch_Response";
}

template<>
inline const char * name<communication::srv::GaitSwitch_Response>()
{
  return "communication/srv/GaitSwitch_Response";
}

template<>
struct has_fixed_size<communication::srv::GaitSwitch_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<communication::srv::GaitSwitch_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<communication::srv::GaitSwitch_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication::srv::GaitSwitch>()
{
  return "communication::srv::GaitSwitch";
}

template<>
inline const char * name<communication::srv::GaitSwitch>()
{
  return "communication/srv/GaitSwitch";
}

template<>
struct has_fixed_size<communication::srv::GaitSwitch>
  : std::integral_constant<
    bool,
    has_fixed_size<communication::srv::GaitSwitch_Request>::value &&
    has_fixed_size<communication::srv::GaitSwitch_Response>::value
  >
{
};

template<>
struct has_bounded_size<communication::srv::GaitSwitch>
  : std::integral_constant<
    bool,
    has_bounded_size<communication::srv::GaitSwitch_Request>::value &&
    has_bounded_size<communication::srv::GaitSwitch_Response>::value
  >
{
};

template<>
struct is_service<communication::srv::GaitSwitch>
  : std::true_type
{
};

template<>
struct is_service_request<communication::srv::GaitSwitch_Request>
  : std::true_type
{
};

template<>
struct is_service_response<communication::srv::GaitSwitch_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION__SRV__DETAIL__GAIT_SWITCH__TRAITS_HPP_
