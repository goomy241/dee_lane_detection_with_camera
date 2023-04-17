// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lane_msgs:msg/LaneMarkingProjected.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__BUILDER_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lane_msgs/msg/detail/lane_marking_projected__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lane_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneMarkingProjected_z
{
public:
  explicit Init_LaneMarkingProjected_z(::lane_msgs::msg::LaneMarkingProjected & msg)
  : msg_(msg)
  {}
  ::lane_msgs::msg::LaneMarkingProjected z(::lane_msgs::msg::LaneMarkingProjected::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lane_msgs::msg::LaneMarkingProjected msg_;
};

class Init_LaneMarkingProjected_y
{
public:
  explicit Init_LaneMarkingProjected_y(::lane_msgs::msg::LaneMarkingProjected & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingProjected_z y(::lane_msgs::msg::LaneMarkingProjected::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_LaneMarkingProjected_z(msg_);
  }

private:
  ::lane_msgs::msg::LaneMarkingProjected msg_;
};

class Init_LaneMarkingProjected_x
{
public:
  Init_LaneMarkingProjected_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneMarkingProjected_y x(::lane_msgs::msg::LaneMarkingProjected::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LaneMarkingProjected_y(msg_);
  }

private:
  ::lane_msgs::msg::LaneMarkingProjected msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lane_msgs::msg::LaneMarkingProjected>()
{
  return lane_msgs::msg::builder::Init_LaneMarkingProjected_x();
}

}  // namespace lane_msgs

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__BUILDER_HPP_
