// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lane_msgs:msg/LaneMarkingArray.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__BUILDER_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lane_msgs/msg/detail/lane_marking_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lane_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneMarkingArray_markings
{
public:
  Init_LaneMarkingArray_markings()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lane_msgs::msg::LaneMarkingArray markings(::lane_msgs::msg::LaneMarkingArray::_markings_type arg)
  {
    msg_.markings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lane_msgs::msg::LaneMarkingArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lane_msgs::msg::LaneMarkingArray>()
{
  return lane_msgs::msg::builder::Init_LaneMarkingArray_markings();
}

}  // namespace lane_msgs

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__BUILDER_HPP_
