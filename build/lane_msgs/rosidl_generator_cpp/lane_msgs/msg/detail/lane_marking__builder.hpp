// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lane_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lane_msgs/msg/detail/lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lane_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneMarking_v
{
public:
  explicit Init_LaneMarking_v(::lane_msgs::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  ::lane_msgs::msg::LaneMarking v(::lane_msgs::msg::LaneMarking::_v_type arg)
  {
    msg_.v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lane_msgs::msg::LaneMarking msg_;
};

class Init_LaneMarking_u
{
public:
  Init_LaneMarking_u()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneMarking_v u(::lane_msgs::msg::LaneMarking::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_LaneMarking_v(msg_);
  }

private:
  ::lane_msgs::msg::LaneMarking msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lane_msgs::msg::LaneMarking>()
{
  return lane_msgs::msg::builder::Init_LaneMarking_u();
}

}  // namespace lane_msgs

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_
