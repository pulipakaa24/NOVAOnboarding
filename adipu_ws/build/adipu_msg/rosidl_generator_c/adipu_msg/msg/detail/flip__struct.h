// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from adipu_msg:msg/Flip.idl
// generated code does not contain a copyright notice

#ifndef ADIPU_MSG__MSG__DETAIL__FLIP__STRUCT_H_
#define ADIPU_MSG__MSG__DETAIL__FLIP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Flip in the package adipu_msg.
typedef struct adipu_msg__msg__Flip
{
  uint8_t structure_needs_at_least_one_member;
} adipu_msg__msg__Flip;

// Struct for a sequence of adipu_msg__msg__Flip.
typedef struct adipu_msg__msg__Flip__Sequence
{
  adipu_msg__msg__Flip * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} adipu_msg__msg__Flip__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADIPU_MSG__MSG__DETAIL__FLIP__STRUCT_H_
