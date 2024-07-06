// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication:msg/ActuatorCmds.idl
// generated code does not contain a copyright notice
#include "communication/msg/detail/actuator_cmds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `actuators_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `kp`
// Member `pos`
// Member `kd`
// Member `vel`
// Member `torque`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
communication__msg__ActuatorCmds__init(communication__msg__ActuatorCmds * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    communication__msg__ActuatorCmds__fini(msg);
    return false;
  }
  // actuators_name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->actuators_name, 0)) {
    communication__msg__ActuatorCmds__fini(msg);
    return false;
  }
  // kp
  if (!rosidl_runtime_c__float__Sequence__init(&msg->kp, 0)) {
    communication__msg__ActuatorCmds__fini(msg);
    return false;
  }
  // pos
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pos, 0)) {
    communication__msg__ActuatorCmds__fini(msg);
    return false;
  }
  // kd
  if (!rosidl_runtime_c__float__Sequence__init(&msg->kd, 0)) {
    communication__msg__ActuatorCmds__fini(msg);
    return false;
  }
  // vel
  if (!rosidl_runtime_c__float__Sequence__init(&msg->vel, 0)) {
    communication__msg__ActuatorCmds__fini(msg);
    return false;
  }
  // torque
  if (!rosidl_runtime_c__float__Sequence__init(&msg->torque, 0)) {
    communication__msg__ActuatorCmds__fini(msg);
    return false;
  }
  return true;
}

void
communication__msg__ActuatorCmds__fini(communication__msg__ActuatorCmds * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // actuators_name
  rosidl_runtime_c__String__Sequence__fini(&msg->actuators_name);
  // kp
  rosidl_runtime_c__float__Sequence__fini(&msg->kp);
  // pos
  rosidl_runtime_c__float__Sequence__fini(&msg->pos);
  // kd
  rosidl_runtime_c__float__Sequence__fini(&msg->kd);
  // vel
  rosidl_runtime_c__float__Sequence__fini(&msg->vel);
  // torque
  rosidl_runtime_c__float__Sequence__fini(&msg->torque);
}

bool
communication__msg__ActuatorCmds__are_equal(const communication__msg__ActuatorCmds * lhs, const communication__msg__ActuatorCmds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // actuators_name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->actuators_name), &(rhs->actuators_name)))
  {
    return false;
  }
  // kp
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->kp), &(rhs->kp)))
  {
    return false;
  }
  // pos
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // kd
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->kd), &(rhs->kd)))
  {
    return false;
  }
  // vel
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->vel), &(rhs->vel)))
  {
    return false;
  }
  // torque
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->torque), &(rhs->torque)))
  {
    return false;
  }
  return true;
}

bool
communication__msg__ActuatorCmds__copy(
  const communication__msg__ActuatorCmds * input,
  communication__msg__ActuatorCmds * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // actuators_name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->actuators_name), &(output->actuators_name)))
  {
    return false;
  }
  // kp
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->kp), &(output->kp)))
  {
    return false;
  }
  // pos
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // kd
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->kd), &(output->kd)))
  {
    return false;
  }
  // vel
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->vel), &(output->vel)))
  {
    return false;
  }
  // torque
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->torque), &(output->torque)))
  {
    return false;
  }
  return true;
}

communication__msg__ActuatorCmds *
communication__msg__ActuatorCmds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__ActuatorCmds * msg = (communication__msg__ActuatorCmds *)allocator.allocate(sizeof(communication__msg__ActuatorCmds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication__msg__ActuatorCmds));
  bool success = communication__msg__ActuatorCmds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication__msg__ActuatorCmds__destroy(communication__msg__ActuatorCmds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication__msg__ActuatorCmds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication__msg__ActuatorCmds__Sequence__init(communication__msg__ActuatorCmds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__ActuatorCmds * data = NULL;

  if (size) {
    data = (communication__msg__ActuatorCmds *)allocator.zero_allocate(size, sizeof(communication__msg__ActuatorCmds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication__msg__ActuatorCmds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication__msg__ActuatorCmds__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
communication__msg__ActuatorCmds__Sequence__fini(communication__msg__ActuatorCmds__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      communication__msg__ActuatorCmds__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

communication__msg__ActuatorCmds__Sequence *
communication__msg__ActuatorCmds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__msg__ActuatorCmds__Sequence * array = (communication__msg__ActuatorCmds__Sequence *)allocator.allocate(sizeof(communication__msg__ActuatorCmds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication__msg__ActuatorCmds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication__msg__ActuatorCmds__Sequence__destroy(communication__msg__ActuatorCmds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication__msg__ActuatorCmds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication__msg__ActuatorCmds__Sequence__are_equal(const communication__msg__ActuatorCmds__Sequence * lhs, const communication__msg__ActuatorCmds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication__msg__ActuatorCmds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication__msg__ActuatorCmds__Sequence__copy(
  const communication__msg__ActuatorCmds__Sequence * input,
  communication__msg__ActuatorCmds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication__msg__ActuatorCmds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication__msg__ActuatorCmds * data =
      (communication__msg__ActuatorCmds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication__msg__ActuatorCmds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication__msg__ActuatorCmds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication__msg__ActuatorCmds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
