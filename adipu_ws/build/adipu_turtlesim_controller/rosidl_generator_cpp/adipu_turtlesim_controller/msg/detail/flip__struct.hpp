// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from adipu_turtlesim_controller:msg/Flip.idl
// generated code does not contain a copyright notice

#ifndef ADIPU_TURTLESIM_CONTROLLER__MSG__DETAIL__FLIP__STRUCT_HPP_
#define ADIPU_TURTLESIM_CONTROLLER__MSG__DETAIL__FLIP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__adipu_turtlesim_controller__msg__Flip __attribute__((deprecated))
#else
# define DEPRECATED__adipu_turtlesim_controller__msg__Flip __declspec(deprecated)
#endif

namespace adipu_turtlesim_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Flip_
{
  using Type = Flip_<ContainerAllocator>;

  explicit Flip_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Flip_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    adipu_turtlesim_controller::msg::Flip_<ContainerAllocator> *;
  using ConstRawPtr =
    const adipu_turtlesim_controller::msg::Flip_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<adipu_turtlesim_controller::msg::Flip_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<adipu_turtlesim_controller::msg::Flip_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      adipu_turtlesim_controller::msg::Flip_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<adipu_turtlesim_controller::msg::Flip_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      adipu_turtlesim_controller::msg::Flip_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<adipu_turtlesim_controller::msg::Flip_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<adipu_turtlesim_controller::msg::Flip_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<adipu_turtlesim_controller::msg::Flip_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__adipu_turtlesim_controller__msg__Flip
    std::shared_ptr<adipu_turtlesim_controller::msg::Flip_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__adipu_turtlesim_controller__msg__Flip
    std::shared_ptr<adipu_turtlesim_controller::msg::Flip_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Flip_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Flip_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Flip_

// alias to use template instance with default allocator
using Flip =
  adipu_turtlesim_controller::msg::Flip_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace adipu_turtlesim_controller

#endif  // ADIPU_TURTLESIM_CONTROLLER__MSG__DETAIL__FLIP__STRUCT_HPP_
