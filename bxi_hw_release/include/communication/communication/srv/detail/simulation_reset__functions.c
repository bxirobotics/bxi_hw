// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication:srv/SimulationReset.idl
// generated code does not contain a copyright notice
#include "communication/srv/detail/simulation_reset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `base_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
communication__srv__SimulationReset_Request__init(communication__srv__SimulationReset_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    communication__srv__SimulationReset_Request__fini(msg);
    return false;
  }
  // base_pose
  if (!geometry_msgs__msg__Pose__init(&msg->base_pose)) {
    communication__srv__SimulationReset_Request__fini(msg);
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->joint_state)) {
    communication__srv__SimulationReset_Request__fini(msg);
    return false;
  }
  return true;
}

void
communication__srv__SimulationReset_Request__fini(communication__srv__SimulationReset_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // base_pose
  geometry_msgs__msg__Pose__fini(&msg->base_pose);
  // joint_state
  sensor_msgs__msg__JointState__fini(&msg->joint_state);
}

bool
communication__srv__SimulationReset_Request__are_equal(const communication__srv__SimulationReset_Request * lhs, const communication__srv__SimulationReset_Request * rhs)
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
  // base_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->base_pose), &(rhs->base_pose)))
  {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->joint_state), &(rhs->joint_state)))
  {
    return false;
  }
  return true;
}

bool
communication__srv__SimulationReset_Request__copy(
  const communication__srv__SimulationReset_Request * input,
  communication__srv__SimulationReset_Request * output)
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
  // base_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->base_pose), &(output->base_pose)))
  {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->joint_state), &(output->joint_state)))
  {
    return false;
  }
  return true;
}

communication__srv__SimulationReset_Request *
communication__srv__SimulationReset_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__SimulationReset_Request * msg = (communication__srv__SimulationReset_Request *)allocator.allocate(sizeof(communication__srv__SimulationReset_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication__srv__SimulationReset_Request));
  bool success = communication__srv__SimulationReset_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication__srv__SimulationReset_Request__destroy(communication__srv__SimulationReset_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication__srv__SimulationReset_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication__srv__SimulationReset_Request__Sequence__init(communication__srv__SimulationReset_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__SimulationReset_Request * data = NULL;

  if (size) {
    data = (communication__srv__SimulationReset_Request *)allocator.zero_allocate(size, sizeof(communication__srv__SimulationReset_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication__srv__SimulationReset_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication__srv__SimulationReset_Request__fini(&data[i - 1]);
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
communication__srv__SimulationReset_Request__Sequence__fini(communication__srv__SimulationReset_Request__Sequence * array)
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
      communication__srv__SimulationReset_Request__fini(&array->data[i]);
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

communication__srv__SimulationReset_Request__Sequence *
communication__srv__SimulationReset_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__SimulationReset_Request__Sequence * array = (communication__srv__SimulationReset_Request__Sequence *)allocator.allocate(sizeof(communication__srv__SimulationReset_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication__srv__SimulationReset_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication__srv__SimulationReset_Request__Sequence__destroy(communication__srv__SimulationReset_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication__srv__SimulationReset_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication__srv__SimulationReset_Request__Sequence__are_equal(const communication__srv__SimulationReset_Request__Sequence * lhs, const communication__srv__SimulationReset_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication__srv__SimulationReset_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication__srv__SimulationReset_Request__Sequence__copy(
  const communication__srv__SimulationReset_Request__Sequence * input,
  communication__srv__SimulationReset_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication__srv__SimulationReset_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication__srv__SimulationReset_Request * data =
      (communication__srv__SimulationReset_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication__srv__SimulationReset_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication__srv__SimulationReset_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication__srv__SimulationReset_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
communication__srv__SimulationReset_Response__init(communication__srv__SimulationReset_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_success
  return true;
}

void
communication__srv__SimulationReset_Response__fini(communication__srv__SimulationReset_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_success
}

bool
communication__srv__SimulationReset_Response__are_equal(const communication__srv__SimulationReset_Response * lhs, const communication__srv__SimulationReset_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_success
  if (lhs->is_success != rhs->is_success) {
    return false;
  }
  return true;
}

bool
communication__srv__SimulationReset_Response__copy(
  const communication__srv__SimulationReset_Response * input,
  communication__srv__SimulationReset_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // is_success
  output->is_success = input->is_success;
  return true;
}

communication__srv__SimulationReset_Response *
communication__srv__SimulationReset_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__SimulationReset_Response * msg = (communication__srv__SimulationReset_Response *)allocator.allocate(sizeof(communication__srv__SimulationReset_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication__srv__SimulationReset_Response));
  bool success = communication__srv__SimulationReset_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication__srv__SimulationReset_Response__destroy(communication__srv__SimulationReset_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication__srv__SimulationReset_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication__srv__SimulationReset_Response__Sequence__init(communication__srv__SimulationReset_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__SimulationReset_Response * data = NULL;

  if (size) {
    data = (communication__srv__SimulationReset_Response *)allocator.zero_allocate(size, sizeof(communication__srv__SimulationReset_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication__srv__SimulationReset_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication__srv__SimulationReset_Response__fini(&data[i - 1]);
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
communication__srv__SimulationReset_Response__Sequence__fini(communication__srv__SimulationReset_Response__Sequence * array)
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
      communication__srv__SimulationReset_Response__fini(&array->data[i]);
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

communication__srv__SimulationReset_Response__Sequence *
communication__srv__SimulationReset_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication__srv__SimulationReset_Response__Sequence * array = (communication__srv__SimulationReset_Response__Sequence *)allocator.allocate(sizeof(communication__srv__SimulationReset_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication__srv__SimulationReset_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication__srv__SimulationReset_Response__Sequence__destroy(communication__srv__SimulationReset_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication__srv__SimulationReset_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication__srv__SimulationReset_Response__Sequence__are_equal(const communication__srv__SimulationReset_Response__Sequence * lhs, const communication__srv__SimulationReset_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication__srv__SimulationReset_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication__srv__SimulationReset_Response__Sequence__copy(
  const communication__srv__SimulationReset_Response__Sequence * input,
  communication__srv__SimulationReset_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication__srv__SimulationReset_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication__srv__SimulationReset_Response * data =
      (communication__srv__SimulationReset_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication__srv__SimulationReset_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication__srv__SimulationReset_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication__srv__SimulationReset_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
