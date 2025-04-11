// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from adipu_turtlesim_controller:msg/Flip.idl
// generated code does not contain a copyright notice
#include "adipu_turtlesim_controller/msg/detail/flip__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
adipu_turtlesim_controller__msg__Flip__init(adipu_turtlesim_controller__msg__Flip * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
adipu_turtlesim_controller__msg__Flip__fini(adipu_turtlesim_controller__msg__Flip * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
adipu_turtlesim_controller__msg__Flip__are_equal(const adipu_turtlesim_controller__msg__Flip * lhs, const adipu_turtlesim_controller__msg__Flip * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
adipu_turtlesim_controller__msg__Flip__copy(
  const adipu_turtlesim_controller__msg__Flip * input,
  adipu_turtlesim_controller__msg__Flip * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

adipu_turtlesim_controller__msg__Flip *
adipu_turtlesim_controller__msg__Flip__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  adipu_turtlesim_controller__msg__Flip * msg = (adipu_turtlesim_controller__msg__Flip *)allocator.allocate(sizeof(adipu_turtlesim_controller__msg__Flip), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(adipu_turtlesim_controller__msg__Flip));
  bool success = adipu_turtlesim_controller__msg__Flip__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
adipu_turtlesim_controller__msg__Flip__destroy(adipu_turtlesim_controller__msg__Flip * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    adipu_turtlesim_controller__msg__Flip__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
adipu_turtlesim_controller__msg__Flip__Sequence__init(adipu_turtlesim_controller__msg__Flip__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  adipu_turtlesim_controller__msg__Flip * data = NULL;

  if (size) {
    data = (adipu_turtlesim_controller__msg__Flip *)allocator.zero_allocate(size, sizeof(adipu_turtlesim_controller__msg__Flip), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = adipu_turtlesim_controller__msg__Flip__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        adipu_turtlesim_controller__msg__Flip__fini(&data[i - 1]);
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
adipu_turtlesim_controller__msg__Flip__Sequence__fini(adipu_turtlesim_controller__msg__Flip__Sequence * array)
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
      adipu_turtlesim_controller__msg__Flip__fini(&array->data[i]);
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

adipu_turtlesim_controller__msg__Flip__Sequence *
adipu_turtlesim_controller__msg__Flip__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  adipu_turtlesim_controller__msg__Flip__Sequence * array = (adipu_turtlesim_controller__msg__Flip__Sequence *)allocator.allocate(sizeof(adipu_turtlesim_controller__msg__Flip__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = adipu_turtlesim_controller__msg__Flip__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
adipu_turtlesim_controller__msg__Flip__Sequence__destroy(adipu_turtlesim_controller__msg__Flip__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    adipu_turtlesim_controller__msg__Flip__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
adipu_turtlesim_controller__msg__Flip__Sequence__are_equal(const adipu_turtlesim_controller__msg__Flip__Sequence * lhs, const adipu_turtlesim_controller__msg__Flip__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!adipu_turtlesim_controller__msg__Flip__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
adipu_turtlesim_controller__msg__Flip__Sequence__copy(
  const adipu_turtlesim_controller__msg__Flip__Sequence * input,
  adipu_turtlesim_controller__msg__Flip__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(adipu_turtlesim_controller__msg__Flip);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    adipu_turtlesim_controller__msg__Flip * data =
      (adipu_turtlesim_controller__msg__Flip *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!adipu_turtlesim_controller__msg__Flip__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          adipu_turtlesim_controller__msg__Flip__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!adipu_turtlesim_controller__msg__Flip__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
