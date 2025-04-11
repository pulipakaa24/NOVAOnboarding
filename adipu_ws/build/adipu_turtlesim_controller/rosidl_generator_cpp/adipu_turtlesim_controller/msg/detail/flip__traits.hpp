// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from adipu_turtlesim_controller:msg/Flip.idl
// generated code does not contain a copyright notice

#ifndef ADIPU_TURTLESIM_CONTROLLER__MSG__DETAIL__FLIP__TRAITS_HPP_
#define ADIPU_TURTLESIM_CONTROLLER__MSG__DETAIL__FLIP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "adipu_turtlesim_controller/msg/detail/flip__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace adipu_turtlesim_controller
{

namespace msg
{

inline void to_flow_style_yaml(
  const Flip & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Flip & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Flip & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace adipu_turtlesim_controller

namespace rosidl_generator_traits
{

[[deprecated("use adipu_turtlesim_controller::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const adipu_turtlesim_controller::msg::Flip & msg,
  std::ostream & out, size_t indentation = 0)
{
  adipu_turtlesim_controller::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use adipu_turtlesim_controller::msg::to_yaml() instead")]]
inline std::string to_yaml(const adipu_turtlesim_controller::msg::Flip & msg)
{
  return adipu_turtlesim_controller::msg::to_yaml(msg);
}

template<>
inline const char * data_type<adipu_turtlesim_controller::msg::Flip>()
{
  return "adipu_turtlesim_controller::msg::Flip";
}

template<>
inline const char * name<adipu_turtlesim_controller::msg::Flip>()
{
  return "adipu_turtlesim_controller/msg/Flip";
}

template<>
struct has_fixed_size<adipu_turtlesim_controller::msg::Flip>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<adipu_turtlesim_controller::msg::Flip>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<adipu_turtlesim_controller::msg::Flip>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ADIPU_TURTLESIM_CONTROLLER__MSG__DETAIL__FLIP__TRAITS_HPP_
