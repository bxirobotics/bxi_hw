// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:srv/RobotReset.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__ROBOT_RESET__STRUCT_H_
#define COMMUNICATION__SRV__DETAIL__ROBOT_RESET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in srv/RobotReset in the package communication.
typedef struct communication__srv__RobotReset_Request
{
  std_msgs__msg__Header header;
  int32_t reset_step;
  /// only for simulation
  bool release;
} communication__srv__RobotReset_Request;

// Struct for a sequence of communication__srv__RobotReset_Request.
typedef struct communication__srv__RobotReset_Request__Sequence
{
  communication__srv__RobotReset_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__srv__RobotReset_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RobotReset in the package communication.
typedef struct communication__srv__RobotReset_Response
{
  bool is_success;
} communication__srv__RobotReset_Response;

// Struct for a sequence of communication__srv__RobotReset_Response.
typedef struct communication__srv__RobotReset_Response__Sequence
{
  communication__srv__RobotReset_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__srv__RobotReset_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__SRV__DETAIL__ROBOT_RESET__STRUCT_H_
