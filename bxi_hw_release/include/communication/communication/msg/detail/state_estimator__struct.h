// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:msg/StateEstimator.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__STATE_ESTIMATOR__STRUCT_H_
#define COMMUNICATION__MSG__DETAIL__STATE_ESTIMATOR__STRUCT_H_

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
// Member 'qpos'
// Member 'qvel'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/StateEstimator in the package communication.
typedef struct communication__msg__StateEstimator
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence qpos;
  rosidl_runtime_c__float__Sequence qvel;
} communication__msg__StateEstimator;

// Struct for a sequence of communication__msg__StateEstimator.
typedef struct communication__msg__StateEstimator__Sequence
{
  communication__msg__StateEstimator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__msg__StateEstimator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__MSG__DETAIL__STATE_ESTIMATOR__STRUCT_H_
