// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:srv/GaitSwitch.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__GAIT_SWITCH__STRUCT_H_
#define COMMUNICATION__SRV__DETAIL__GAIT_SWITCH__STRUCT_H_

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
// Member 'gait_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GaitSwitch in the package communication.
typedef struct communication__srv__GaitSwitch_Request
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String gait_name;
} communication__srv__GaitSwitch_Request;

// Struct for a sequence of communication__srv__GaitSwitch_Request.
typedef struct communication__srv__GaitSwitch_Request__Sequence
{
  communication__srv__GaitSwitch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__srv__GaitSwitch_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GaitSwitch in the package communication.
typedef struct communication__srv__GaitSwitch_Response
{
  bool is_success;
} communication__srv__GaitSwitch_Response;

// Struct for a sequence of communication__srv__GaitSwitch_Response.
typedef struct communication__srv__GaitSwitch_Response__Sequence
{
  communication__srv__GaitSwitch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__srv__GaitSwitch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__SRV__DETAIL__GAIT_SWITCH__STRUCT_H_
