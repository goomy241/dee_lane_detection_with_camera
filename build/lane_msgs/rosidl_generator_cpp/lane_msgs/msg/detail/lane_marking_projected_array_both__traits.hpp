// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lane_msgs:msg/LaneMarkingProjectedArrayBoth.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY_BOTH__TRAITS_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY_BOTH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lane_msgs/msg/detail/lane_marking_projected_array_both__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'markings_left'
// Member 'markings_right'
#include "lane_msgs/msg/detail/lane_marking_projected__traits.hpp"

namespace lane_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneMarkingProjectedArrayBoth & msg,
  std::ostream & out)
{
  out << "{";
  // member: markings_left
  {
    if (msg.markings_left.size() == 0) {
      out << "markings_left: []";
    } else {
      out << "markings_left: [";
      size_t pending_items = msg.markings_left.size();
      for (auto item : msg.markings_left) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: markings_right
  {
    if (msg.markings_right.size() == 0) {
      out << "markings_right: []";
    } else {
      out << "markings_right: [";
      size_t pending_items = msg.markings_right.size();
      for (auto item : msg.markings_right) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneMarkingProjectedArrayBoth & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: markings_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markings_left.size() == 0) {
      out << "markings_left: []\n";
    } else {
      out << "markings_left:\n";
      for (auto item : msg.markings_left) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: markings_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.markings_right.size() == 0) {
      out << "markings_right: []\n";
    } else {
      out << "markings_right:\n";
      for (auto item : msg.markings_right) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneMarkingProjectedArrayBoth & msg, bool use_flow_style = false)
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
  const lane_msgs::msg::LaneMarkingProjectedArrayBoth & msg,
  std::ostream & out, size_t indentation = 0)
{
  lane_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lane_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lane_msgs::msg::LaneMarkingProjectedArrayBoth & msg)
{
  return lane_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lane_msgs::msg::LaneMarkingProjectedArrayBoth>()
{
  return "lane_msgs::msg::LaneMarkingProjectedArrayBoth";
}

template<>
inline const char * name<lane_msgs::msg::LaneMarkingProjectedArrayBoth>()
{
  return "lane_msgs/msg/LaneMarkingProjectedArrayBoth";
}

template<>
struct has_fixed_size<lane_msgs::msg::LaneMarkingProjectedArrayBoth>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lane_msgs::msg::LaneMarkingProjectedArrayBoth>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lane_msgs::msg::LaneMarkingProjectedArrayBoth>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY_BOTH__TRAITS_HPP_
