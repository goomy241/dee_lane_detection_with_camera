// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lane_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING__TRAITS_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lane_msgs/msg/detail/lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lane_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneMarking & msg,
  std::ostream & out)
{
  out << "{";
  // member: u
  {
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneMarking & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << "\n";
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneMarking & msg, bool use_flow_style = false)
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

}  // namespace lane_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lane_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lane_msgs::msg::LaneMarking & msg,
  std::ostream & out, size_t indentation = 0)
{
  lane_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lane_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lane_msgs::msg::LaneMarking & msg)
{
  return lane_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lane_msgs::msg::LaneMarking>()
{
  return "lane_msgs::msg::LaneMarking";
}

template<>
inline const char * name<lane_msgs::msg::LaneMarking>()
{
  return "lane_msgs/msg/LaneMarking";
}

template<>
struct has_fixed_size<lane_msgs::msg::LaneMarking>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lane_msgs::msg::LaneMarking>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lane_msgs::msg::LaneMarking>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING__TRAITS_HPP_
