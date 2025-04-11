// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from adipu_msg:msg/Flip.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "adipu_msg/msg/detail/flip__rosidl_typesupport_introspection_c.h"
#include "adipu_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "adipu_msg/msg/detail/flip__functions.h"
#include "adipu_msg/msg/detail/flip__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  adipu_msg__msg__Flip__init(message_memory);
}

void adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_fini_function(void * message_memory)
{
  adipu_msg__msg__Flip__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adipu_msg__msg__Flip, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_message_members = {
  "adipu_msg__msg",  // message namespace
  "Flip",  // message name
  1,  // number of fields
  sizeof(adipu_msg__msg__Flip),
  adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_message_member_array,  // message members
  adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_init_function,  // function to initialize message memory (memory has to be allocated)
  adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_message_type_support_handle = {
  0,
  &adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_adipu_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, adipu_msg, msg, Flip)() {
  if (!adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_message_type_support_handle.typesupport_identifier) {
    adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &adipu_msg__msg__Flip__rosidl_typesupport_introspection_c__Flip_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
