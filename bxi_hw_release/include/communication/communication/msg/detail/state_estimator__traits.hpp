// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication:msg/StateEstimator.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__STATE_ESTIMATOR__TRAITS_HPP_
#define COMMUNICATION__MSG__DETAIL__STATE_ESTIMATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication/msg/detail/state_estimator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace communication
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateEstimator & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: qpos
  {
    if (msg.qpos.size() == 0) {
      out << "qpos: []";
    } else {
      out << "qpos: [";
      size_t pending_items = msg.qpos.size();
      for (auto item : msg.qpos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: qvel
  {
    if (msg.qvel.size() == 0) {
      out << "qvel: []";
    } else {
      out << "qvel: [";
      size_t pending_items = msg.qvel.size();
      for (auto item : msg.qvel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StateEstimator & msg,
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

  // member: qpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.qpos.size() == 0) {
      out << "qpos: []\n";
    } else {
      out << "qpos:\n";
      for (auto item : msg.qpos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: qvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.qvel.size() == 0) {
      out << "qvel: []\n";
    } else {
      out << "qvel:\n";
      for (auto item : msg.qvel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateEstimator & msg, bool use_flow_style = false)
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
  const communication::msg::StateEstimator & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication::msg::to_yaml() instead")]]
inline std::string to_yaml(const communication::msg::StateEstimator & msg)
{
  return communication::msg::to_yaml(msg);
}

template<>
inline const char * data_type<communication::msg::StateEstimator>()
{
  return "communication::msg::StateEstimator";
}

template<>
inline const char * name<communication::msg::StateEstimator>()
{
  return "communication/msg/StateEstimator";
}

template<>
struct has_fixed_size<communication::msg::StateEstimator>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication::msg::StateEstimator>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<communication::msg::StateEstimator>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION__MSG__DETAIL__STATE_ESTIMATOR__TRAITS_HPP_
