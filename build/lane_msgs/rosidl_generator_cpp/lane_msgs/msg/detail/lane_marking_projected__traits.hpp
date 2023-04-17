// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lane_msgs:msg/LaneMarkingProjected.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__TRAITS_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lane_msgs/msg/detail/lane_marking_projected__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lane_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneMarkingProjected & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneMarkingProjected & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneMarkingProjected & msg, bool use_flow_style = false)
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
  const lane_msgs::msg::LaneMarkingProjected & msg,
  std::ostream & out, size_t indentation = 0)
{
  lane_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lane_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lane_msgs::msg::LaneMarkingProjected & msg)
{
  return lane_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lane_msgs::msg::LaneMarkingProjected>()
{
  return "lane_msgs::msg::LaneMarkingProjected";
}

template<>
inline const char * name<lane_msgs::msg::LaneMarkingProjected>()
{
  return "lane_msgs/msg/LaneMarkingProjected";
}

template<>
struct has_fixed_size<lane_msgs::msg::LaneMarkingProjected>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lane_msgs::msg::LaneMarkingProjected>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lane_msgs::msg::LaneMarkingProjected>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__TRAITS_HPP_
