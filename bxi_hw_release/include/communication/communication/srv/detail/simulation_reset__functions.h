// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from communication:srv/SimulationReset.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__FUNCTIONS_H_
#define COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "communication/msg/rosidl_generator_c__visibility_control.h"

#include "communication/srv/detail/simulation_reset__struct.h"

/// Initialize srv/SimulationReset message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * communication__srv__SimulationReset_Request
 * )) before or use
 * communication__srv__SimulationReset_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Request__init(communication__srv__SimulationReset_Request * msg);

/// Finalize srv/SimulationReset message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__srv__SimulationReset_Request__fini(communication__srv__SimulationReset_Request * msg);

/// Create srv/SimulationReset message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * communication__srv__SimulationReset_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
communication__srv__SimulationReset_Request *
communication__srv__SimulationReset_Request__create();

/// Destroy srv/SimulationReset message.
/**
 * It calls
 * communication__srv__SimulationReset_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__srv__SimulationReset_Request__destroy(communication__srv__SimulationReset_Request * msg);

/// Check for srv/SimulationReset message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Request__are_equal(const communication__srv__SimulationReset_Request * lhs, const communication__srv__SimulationReset_Request * rhs);

/// Copy a srv/SimulationReset message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Request__copy(
  const communication__srv__SimulationReset_Request * input,
  communication__srv__SimulationReset_Request * output);

/// Initialize array of srv/SimulationReset messages.
/**
 * It allocates the memory for the number of elements and calls
 * communication__srv__SimulationReset_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Request__Sequence__init(communication__srv__SimulationReset_Request__Sequence * array, size_t size);

/// Finalize array of srv/SimulationReset messages.
/**
 * It calls
 * communication__srv__SimulationReset_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__srv__SimulationReset_Request__Sequence__fini(communication__srv__SimulationReset_Request__Sequence * array);

/// Create array of srv/SimulationReset messages.
/**
 * It allocates the memory for the array and calls
 * communication__srv__SimulationReset_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
communication__srv__SimulationReset_Request__Sequence *
communication__srv__SimulationReset_Request__Sequence__create(size_t size);

/// Destroy array of srv/SimulationReset messages.
/**
 * It calls
 * communication__srv__SimulationReset_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__srv__SimulationReset_Request__Sequence__destroy(communication__srv__SimulationReset_Request__Sequence * array);

/// Check for srv/SimulationReset message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Request__Sequence__are_equal(const communication__srv__SimulationReset_Request__Sequence * lhs, const communication__srv__SimulationReset_Request__Sequence * rhs);

/// Copy an array of srv/SimulationReset messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Request__Sequence__copy(
  const communication__srv__SimulationReset_Request__Sequence * input,
  communication__srv__SimulationReset_Request__Sequence * output);

/// Initialize srv/SimulationReset message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * communication__srv__SimulationReset_Response
 * )) before or use
 * communication__srv__SimulationReset_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Response__init(communication__srv__SimulationReset_Response * msg);

/// Finalize srv/SimulationReset message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__srv__SimulationReset_Response__fini(communication__srv__SimulationReset_Response * msg);

/// Create srv/SimulationReset message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * communication__srv__SimulationReset_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
communication__srv__SimulationReset_Response *
communication__srv__SimulationReset_Response__create();

/// Destroy srv/SimulationReset message.
/**
 * It calls
 * communication__srv__SimulationReset_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__srv__SimulationReset_Response__destroy(communication__srv__SimulationReset_Response * msg);

/// Check for srv/SimulationReset message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Response__are_equal(const communication__srv__SimulationReset_Response * lhs, const communication__srv__SimulationReset_Response * rhs);

/// Copy a srv/SimulationReset message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Response__copy(
  const communication__srv__SimulationReset_Response * input,
  communication__srv__SimulationReset_Response * output);

/// Initialize array of srv/SimulationReset messages.
/**
 * It allocates the memory for the number of elements and calls
 * communication__srv__SimulationReset_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Response__Sequence__init(communication__srv__SimulationReset_Response__Sequence * array, size_t size);

/// Finalize array of srv/SimulationReset messages.
/**
 * It calls
 * communication__srv__SimulationReset_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__srv__SimulationReset_Response__Sequence__fini(communication__srv__SimulationReset_Response__Sequence * array);

/// Create array of srv/SimulationReset messages.
/**
 * It allocates the memory for the array and calls
 * communication__srv__SimulationReset_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
communication__srv__SimulationReset_Response__Sequence *
communication__srv__SimulationReset_Response__Sequence__create(size_t size);

/// Destroy array of srv/SimulationReset messages.
/**
 * It calls
 * communication__srv__SimulationReset_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
void
communication__srv__SimulationReset_Response__Sequence__destroy(communication__srv__SimulationReset_Response__Sequence * array);

/// Check for srv/SimulationReset message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Response__Sequence__are_equal(const communication__srv__SimulationReset_Response__Sequence * lhs, const communication__srv__SimulationReset_Response__Sequence * rhs);

/// Copy an array of srv/SimulationReset messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_communication
bool
communication__srv__SimulationReset_Response__Sequence__copy(
  const communication__srv__SimulationReset_Response__Sequence * input,
  communication__srv__SimulationReset_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__FUNCTIONS_H_
