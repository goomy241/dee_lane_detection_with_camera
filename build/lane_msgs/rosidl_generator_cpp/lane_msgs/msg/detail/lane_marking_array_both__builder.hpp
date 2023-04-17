// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lane_msgs:msg/LaneMarkingArrayBoth.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY_BOTH__BUILDER_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY_BOTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lane_msgs/msg/detail/lane_marking_array_both__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lane_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneMarkingArrayBoth_markings_right
{
public:
  explicit Init_LaneMarkingArrayBoth_markings_right(::lane_msgs::msg::LaneMarkingArrayBoth & msg)
  : msg_(msg)
  {}
  ::lane_msgs::msg::LaneMarkingArrayBoth markings_right(::lane_msgs::msg::LaneMarkingArrayBoth::_markings_right_type arg)
  {
    msg_.markings_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lane_msgs::msg::LaneMarkingArrayBoth msg_;
};

class Init_LaneMarkingArrayBoth_markings_left
{
public:
  Init_LaneMarkingArrayBoth_markings_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneMarkingArrayBoth_markings_right markings_left(::lane_msgs::msg::LaneMarkingArrayBoth::_markings_left_type arg)
  {
    msg_.markings_left = std::move(arg);
    return Init_LaneMarkingArrayBoth_markings_right(msg_);
  }

private:
  ::lane_msgs::msg::LaneMarkingArrayBoth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lane_msgs::msg::LaneMarkingArrayBoth>()
{
  return lane_msgs::msg::builder::Init_LaneMarkingArrayBoth_markings_left();
}

}  // namespace lane_msgs

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY_BOTH__BUILDER_HPP_
