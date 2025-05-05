// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msg_interfaces:msg/DetectionResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msg_interfaces/msg/detection_result.h"


#ifndef CUSTOM_MSG_INTERFACES__MSG__DETAIL__DETECTION_RESULT__FUNCTIONS_H_
#define CUSTOM_MSG_INTERFACES__MSG__DETAIL__DETECTION_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msg_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msg_interfaces/msg/detail/detection_result__struct.h"

/// Initialize msg/DetectionResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msg_interfaces__msg__DetectionResult
 * )) before or use
 * custom_msg_interfaces__msg__DetectionResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
bool
custom_msg_interfaces__msg__DetectionResult__init(custom_msg_interfaces__msg__DetectionResult * msg);

/// Finalize msg/DetectionResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
void
custom_msg_interfaces__msg__DetectionResult__fini(custom_msg_interfaces__msg__DetectionResult * msg);

/// Create msg/DetectionResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msg_interfaces__msg__DetectionResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
custom_msg_interfaces__msg__DetectionResult *
custom_msg_interfaces__msg__DetectionResult__create(void);

/// Destroy msg/DetectionResult message.
/**
 * It calls
 * custom_msg_interfaces__msg__DetectionResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
void
custom_msg_interfaces__msg__DetectionResult__destroy(custom_msg_interfaces__msg__DetectionResult * msg);

/// Check for msg/DetectionResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
bool
custom_msg_interfaces__msg__DetectionResult__are_equal(const custom_msg_interfaces__msg__DetectionResult * lhs, const custom_msg_interfaces__msg__DetectionResult * rhs);

/// Copy a msg/DetectionResult message.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
bool
custom_msg_interfaces__msg__DetectionResult__copy(
  const custom_msg_interfaces__msg__DetectionResult * input,
  custom_msg_interfaces__msg__DetectionResult * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
const rosidl_type_hash_t *
custom_msg_interfaces__msg__DetectionResult__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
custom_msg_interfaces__msg__DetectionResult__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
const rosidl_runtime_c__type_description__TypeSource *
custom_msg_interfaces__msg__DetectionResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msg_interfaces__msg__DetectionResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/DetectionResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msg_interfaces__msg__DetectionResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
bool
custom_msg_interfaces__msg__DetectionResult__Sequence__init(custom_msg_interfaces__msg__DetectionResult__Sequence * array, size_t size);

/// Finalize array of msg/DetectionResult messages.
/**
 * It calls
 * custom_msg_interfaces__msg__DetectionResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
void
custom_msg_interfaces__msg__DetectionResult__Sequence__fini(custom_msg_interfaces__msg__DetectionResult__Sequence * array);

/// Create array of msg/DetectionResult messages.
/**
 * It allocates the memory for the array and calls
 * custom_msg_interfaces__msg__DetectionResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
custom_msg_interfaces__msg__DetectionResult__Sequence *
custom_msg_interfaces__msg__DetectionResult__Sequence__create(size_t size);

/// Destroy array of msg/DetectionResult messages.
/**
 * It calls
 * custom_msg_interfaces__msg__DetectionResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
void
custom_msg_interfaces__msg__DetectionResult__Sequence__destroy(custom_msg_interfaces__msg__DetectionResult__Sequence * array);

/// Check for msg/DetectionResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
bool
custom_msg_interfaces__msg__DetectionResult__Sequence__are_equal(const custom_msg_interfaces__msg__DetectionResult__Sequence * lhs, const custom_msg_interfaces__msg__DetectionResult__Sequence * rhs);

/// Copy an array of msg/DetectionResult messages.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msg_interfaces
bool
custom_msg_interfaces__msg__DetectionResult__Sequence__copy(
  const custom_msg_interfaces__msg__DetectionResult__Sequence * input,
  custom_msg_interfaces__msg__DetectionResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG_INTERFACES__MSG__DETAIL__DETECTION_RESULT__FUNCTIONS_H_
