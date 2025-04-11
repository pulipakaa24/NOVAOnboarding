// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from adipu_turtlesim_controller:msg/Flip.idl
// generated code does not contain a copyright notice

#ifndef ADIPU_TURTLESIM_CONTROLLER__MSG__DETAIL__FLIP__FUNCTIONS_H_
#define ADIPU_TURTLESIM_CONTROLLER__MSG__DETAIL__FLIP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "adipu_turtlesim_controller/msg/rosidl_generator_c__visibility_control.h"

#include "adipu_turtlesim_controller/msg/detail/flip__struct.h"

/// Initialize msg/Flip message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * adipu_turtlesim_controller__msg__Flip
 * )) before or use
 * adipu_turtlesim_controller__msg__Flip__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
bool
adipu_turtlesim_controller__msg__Flip__init(adipu_turtlesim_controller__msg__Flip * msg);

/// Finalize msg/Flip message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
void
adipu_turtlesim_controller__msg__Flip__fini(adipu_turtlesim_controller__msg__Flip * msg);

/// Create msg/Flip message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * adipu_turtlesim_controller__msg__Flip__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
adipu_turtlesim_controller__msg__Flip *
adipu_turtlesim_controller__msg__Flip__create();

/// Destroy msg/Flip message.
/**
 * It calls
 * adipu_turtlesim_controller__msg__Flip__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
void
adipu_turtlesim_controller__msg__Flip__destroy(adipu_turtlesim_controller__msg__Flip * msg);

/// Check for msg/Flip message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
bool
adipu_turtlesim_controller__msg__Flip__are_equal(const adipu_turtlesim_controller__msg__Flip * lhs, const adipu_turtlesim_controller__msg__Flip * rhs);

/// Copy a msg/Flip message.
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
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
bool
adipu_turtlesim_controller__msg__Flip__copy(
  const adipu_turtlesim_controller__msg__Flip * input,
  adipu_turtlesim_controller__msg__Flip * output);

/// Initialize array of msg/Flip messages.
/**
 * It allocates the memory for the number of elements and calls
 * adipu_turtlesim_controller__msg__Flip__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
bool
adipu_turtlesim_controller__msg__Flip__Sequence__init(adipu_turtlesim_controller__msg__Flip__Sequence * array, size_t size);

/// Finalize array of msg/Flip messages.
/**
 * It calls
 * adipu_turtlesim_controller__msg__Flip__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
void
adipu_turtlesim_controller__msg__Flip__Sequence__fini(adipu_turtlesim_controller__msg__Flip__Sequence * array);

/// Create array of msg/Flip messages.
/**
 * It allocates the memory for the array and calls
 * adipu_turtlesim_controller__msg__Flip__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
adipu_turtlesim_controller__msg__Flip__Sequence *
adipu_turtlesim_controller__msg__Flip__Sequence__create(size_t size);

/// Destroy array of msg/Flip messages.
/**
 * It calls
 * adipu_turtlesim_controller__msg__Flip__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
void
adipu_turtlesim_controller__msg__Flip__Sequence__destroy(adipu_turtlesim_controller__msg__Flip__Sequence * array);

/// Check for msg/Flip message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
bool
adipu_turtlesim_controller__msg__Flip__Sequence__are_equal(const adipu_turtlesim_controller__msg__Flip__Sequence * lhs, const adipu_turtlesim_controller__msg__Flip__Sequence * rhs);

/// Copy an array of msg/Flip messages.
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
ROSIDL_GENERATOR_C_PUBLIC_adipu_turtlesim_controller
bool
adipu_turtlesim_controller__msg__Flip__Sequence__copy(
  const adipu_turtlesim_controller__msg__Flip__Sequence * input,
  adipu_turtlesim_controller__msg__Flip__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ADIPU_TURTLESIM_CONTROLLER__MSG__DETAIL__FLIP__FUNCTIONS_H_
