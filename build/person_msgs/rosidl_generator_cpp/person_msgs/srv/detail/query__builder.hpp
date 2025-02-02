// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from person_msgs:srv/Query.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__SRV__DETAIL__QUERY__BUILDER_HPP_
#define PERSON_MSGS__SRV__DETAIL__QUERY__BUILDER_HPP_

#include "person_msgs/srv/detail/query__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace person_msgs
{

namespace srv
{

namespace builder
{

class Init_Query_Request_safety
{
public:
  Init_Query_Request_safety()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::person_msgs::srv::Query_Request safety(::person_msgs::srv::Query_Request::_safety_type arg)
  {
    msg_.safety = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_msgs::srv::Query_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_msgs::srv::Query_Request>()
{
  return person_msgs::srv::builder::Init_Query_Request_safety();
}

}  // namespace person_msgs


namespace person_msgs
{

namespace srv
{

namespace builder
{

class Init_Query_Response_total
{
public:
  Init_Query_Response_total()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::person_msgs::srv::Query_Response total(::person_msgs::srv::Query_Response::_total_type arg)
  {
    msg_.total = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_msgs::srv::Query_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_msgs::srv::Query_Response>()
{
  return person_msgs::srv::builder::Init_Query_Response_total();
}

}  // namespace person_msgs

#endif  // PERSON_MSGS__SRV__DETAIL__QUERY__BUILDER_HPP_
