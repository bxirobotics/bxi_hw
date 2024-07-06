// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from communication:msg/MotionCommands.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "communication/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "communication/msg/detail/motion_commands__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace communication
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication
cdr_serialize(
  const communication::msg::MotionCommands & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  communication::msg::MotionCommands & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication
get_serialized_size(
  const communication::msg::MotionCommands & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication
max_serialized_size_MotionCommands(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace communication

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_communication
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, communication, msg, MotionCommands)();

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
