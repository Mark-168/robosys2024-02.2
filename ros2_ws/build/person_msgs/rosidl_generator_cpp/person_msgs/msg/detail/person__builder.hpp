// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from person_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_
#define PERSON_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_

#include "person_msgs/msg/detail/person__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace person_msgs
{

namespace msg
{

namespace builder
{

class Init_Person_total
{
public:
  explicit Init_Person_total(::person_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  ::person_msgs::msg::Person total(::person_msgs::msg::Person::_total_type arg)
  {
    msg_.total = std::move(arg);
    return std::move(msg_);
  }

private:
  ::person_msgs::msg::Person msg_;
};

class Init_Person_color
{
public:
  explicit Init_Person_color(::person_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_total color(::person_msgs::msg::Person::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Person_total(msg_);
  }

private:
  ::person_msgs::msg::Person msg_;
};

class Init_Person_value
{
public:
  explicit Init_Person_value(::person_msgs::msg::Person & msg)
  : msg_(msg)
  {}
  Init_Person_color value(::person_msgs::msg::Person::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_Person_color(msg_);
  }

private:
  ::person_msgs::msg::Person msg_;
};

class Init_Person_light
{
public:
  Init_Person_light()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Person_value light(::person_msgs::msg::Person::_light_type arg)
  {
    msg_.light = std::move(arg);
    return Init_Person_value(msg_);
  }

private:
  ::person_msgs::msg::Person msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::person_msgs::msg::Person>()
{
  return person_msgs::msg::builder::Init_Person_light();
}

}  // namespace person_msgs

#endif  // PERSON_MSGS__MSG__DETAIL__PERSON__BUILDER_HPP_
