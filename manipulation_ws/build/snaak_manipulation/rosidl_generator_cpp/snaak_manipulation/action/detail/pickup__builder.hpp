// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from snaak_manipulation:action/Pickup.idl
// generated code does not contain a copyright notice

#ifndef SNAAK_MANIPULATION__ACTION__DETAIL__PICKUP__BUILDER_HPP_
#define SNAAK_MANIPULATION__ACTION__DETAIL__PICKUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "snaak_manipulation/action/detail/pickup__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace snaak_manipulation
{

namespace action
{

namespace builder
{

class Init_Pickup_Goal_depth
{
public:
  explicit Init_Pickup_Goal_depth(::snaak_manipulation::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  ::snaak_manipulation::action::Pickup_Goal depth(::snaak_manipulation::action::Pickup_Goal::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_y
{
public:
  explicit Init_Pickup_Goal_y(::snaak_manipulation::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_depth y(::snaak_manipulation::action::Pickup_Goal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pickup_Goal_depth(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_x
{
public:
  Init_Pickup_Goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_Goal_y x(::snaak_manipulation::action::Pickup_Goal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pickup_Goal_y(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::snaak_manipulation::action::Pickup_Goal>()
{
  return snaak_manipulation::action::builder::Init_Pickup_Goal_x();
}

}  // namespace snaak_manipulation


namespace snaak_manipulation
{

namespace action
{

namespace builder
{

class Init_Pickup_Result_end_pose
{
public:
  Init_Pickup_Result_end_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::snaak_manipulation::action::Pickup_Result end_pose(::snaak_manipulation::action::Pickup_Result::_end_pose_type arg)
  {
    msg_.end_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::snaak_manipulation::action::Pickup_Result>()
{
  return snaak_manipulation::action::builder::Init_Pickup_Result_end_pose();
}

}  // namespace snaak_manipulation


namespace snaak_manipulation
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::snaak_manipulation::action::Pickup_Feedback>()
{
  return ::snaak_manipulation::action::Pickup_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace snaak_manipulation


namespace snaak_manipulation
{

namespace action
{

namespace builder
{

class Init_Pickup_SendGoal_Request_goal
{
public:
  explicit Init_Pickup_SendGoal_Request_goal(::snaak_manipulation::action::Pickup_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::snaak_manipulation::action::Pickup_SendGoal_Request goal(::snaak_manipulation::action::Pickup_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_SendGoal_Request msg_;
};

class Init_Pickup_SendGoal_Request_goal_id
{
public:
  Init_Pickup_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_SendGoal_Request_goal goal_id(::snaak_manipulation::action::Pickup_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Pickup_SendGoal_Request_goal(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::snaak_manipulation::action::Pickup_SendGoal_Request>()
{
  return snaak_manipulation::action::builder::Init_Pickup_SendGoal_Request_goal_id();
}

}  // namespace snaak_manipulation


namespace snaak_manipulation
{

namespace action
{

namespace builder
{

class Init_Pickup_SendGoal_Response_stamp
{
public:
  explicit Init_Pickup_SendGoal_Response_stamp(::snaak_manipulation::action::Pickup_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::snaak_manipulation::action::Pickup_SendGoal_Response stamp(::snaak_manipulation::action::Pickup_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_SendGoal_Response msg_;
};

class Init_Pickup_SendGoal_Response_accepted
{
public:
  Init_Pickup_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_SendGoal_Response_stamp accepted(::snaak_manipulation::action::Pickup_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Pickup_SendGoal_Response_stamp(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::snaak_manipulation::action::Pickup_SendGoal_Response>()
{
  return snaak_manipulation::action::builder::Init_Pickup_SendGoal_Response_accepted();
}

}  // namespace snaak_manipulation


namespace snaak_manipulation
{

namespace action
{

namespace builder
{

class Init_Pickup_GetResult_Request_goal_id
{
public:
  Init_Pickup_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::snaak_manipulation::action::Pickup_GetResult_Request goal_id(::snaak_manipulation::action::Pickup_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::snaak_manipulation::action::Pickup_GetResult_Request>()
{
  return snaak_manipulation::action::builder::Init_Pickup_GetResult_Request_goal_id();
}

}  // namespace snaak_manipulation


namespace snaak_manipulation
{

namespace action
{

namespace builder
{

class Init_Pickup_GetResult_Response_result
{
public:
  explicit Init_Pickup_GetResult_Response_result(::snaak_manipulation::action::Pickup_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::snaak_manipulation::action::Pickup_GetResult_Response result(::snaak_manipulation::action::Pickup_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_GetResult_Response msg_;
};

class Init_Pickup_GetResult_Response_status
{
public:
  Init_Pickup_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_GetResult_Response_result status(::snaak_manipulation::action::Pickup_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Pickup_GetResult_Response_result(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::snaak_manipulation::action::Pickup_GetResult_Response>()
{
  return snaak_manipulation::action::builder::Init_Pickup_GetResult_Response_status();
}

}  // namespace snaak_manipulation


namespace snaak_manipulation
{

namespace action
{

namespace builder
{

class Init_Pickup_FeedbackMessage_feedback
{
public:
  explicit Init_Pickup_FeedbackMessage_feedback(::snaak_manipulation::action::Pickup_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::snaak_manipulation::action::Pickup_FeedbackMessage feedback(::snaak_manipulation::action::Pickup_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_FeedbackMessage msg_;
};

class Init_Pickup_FeedbackMessage_goal_id
{
public:
  Init_Pickup_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_FeedbackMessage_feedback goal_id(::snaak_manipulation::action::Pickup_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Pickup_FeedbackMessage_feedback(msg_);
  }

private:
  ::snaak_manipulation::action::Pickup_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::snaak_manipulation::action::Pickup_FeedbackMessage>()
{
  return snaak_manipulation::action::builder::Init_Pickup_FeedbackMessage_goal_id();
}

}  // namespace snaak_manipulation

#endif  // SNAAK_MANIPULATION__ACTION__DETAIL__PICKUP__BUILDER_HPP_
