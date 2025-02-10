// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from snaak_manipulation:action/FollowTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SNAAK_MANIPULATION__ACTION__DETAIL__FOLLOW_TRAJECTORY__STRUCT_HPP_
#define SNAAK_MANIPULATION__ACTION__DETAIL__FOLLOW_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_Goal __attribute__((deprecated))
#else
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_Goal __declspec(deprecated)
#endif

namespace snaak_manipulation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTrajectory_Goal_
{
  using Type = FollowTrajectory_Goal_<ContainerAllocator>;

  explicit FollowTrajectory_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traj_id = 0l;
    }
  }

  explicit FollowTrajectory_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traj_id = 0l;
    }
  }

  // field types and members
  using _traj_id_type =
    int32_t;
  _traj_id_type traj_id;

  // setters for named parameter idiom
  Type & set__traj_id(
    const int32_t & _arg)
  {
    this->traj_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_Goal
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_Goal
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTrajectory_Goal_ & other) const
  {
    if (this->traj_id != other.traj_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTrajectory_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTrajectory_Goal_

// alias to use template instance with default allocator
using FollowTrajectory_Goal =
  snaak_manipulation::action::FollowTrajectory_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace snaak_manipulation


// Include directives for member types
// Member 'end_pose'
#include "geometry_msgs/msg/detail/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_Result __attribute__((deprecated))
#else
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_Result __declspec(deprecated)
#endif

namespace snaak_manipulation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTrajectory_Result_
{
  using Type = FollowTrajectory_Result_<ContainerAllocator>;

  explicit FollowTrajectory_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_pose(_init)
  {
    (void)_init;
  }

  explicit FollowTrajectory_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _end_pose_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _end_pose_type end_pose;

  // setters for named parameter idiom
  Type & set__end_pose(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->end_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_Result
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_Result
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTrajectory_Result_ & other) const
  {
    if (this->end_pose != other.end_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTrajectory_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTrajectory_Result_

// alias to use template instance with default allocator
using FollowTrajectory_Result =
  snaak_manipulation::action::FollowTrajectory_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace snaak_manipulation


#ifndef _WIN32
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_Feedback __declspec(deprecated)
#endif

namespace snaak_manipulation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTrajectory_Feedback_
{
  using Type = FollowTrajectory_Feedback_<ContainerAllocator>;

  explicit FollowTrajectory_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit FollowTrajectory_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_Feedback
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_Feedback
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTrajectory_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTrajectory_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTrajectory_Feedback_

// alias to use template instance with default allocator
using FollowTrajectory_Feedback =
  snaak_manipulation::action::FollowTrajectory_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace snaak_manipulation


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "snaak_manipulation/action/detail/follow_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_SendGoal_Request __declspec(deprecated)
#endif

namespace snaak_manipulation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTrajectory_SendGoal_Request_
{
  using Type = FollowTrajectory_SendGoal_Request_<ContainerAllocator>;

  explicit FollowTrajectory_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit FollowTrajectory_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const snaak_manipulation::action::FollowTrajectory_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_SendGoal_Request
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_SendGoal_Request
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTrajectory_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTrajectory_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTrajectory_SendGoal_Request_

// alias to use template instance with default allocator
using FollowTrajectory_SendGoal_Request =
  snaak_manipulation::action::FollowTrajectory_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace snaak_manipulation


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_SendGoal_Response __declspec(deprecated)
#endif

namespace snaak_manipulation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTrajectory_SendGoal_Response_
{
  using Type = FollowTrajectory_SendGoal_Response_<ContainerAllocator>;

  explicit FollowTrajectory_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit FollowTrajectory_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_SendGoal_Response
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_SendGoal_Response
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTrajectory_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTrajectory_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTrajectory_SendGoal_Response_

// alias to use template instance with default allocator
using FollowTrajectory_SendGoal_Response =
  snaak_manipulation::action::FollowTrajectory_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace snaak_manipulation

namespace snaak_manipulation
{

namespace action
{

struct FollowTrajectory_SendGoal
{
  using Request = snaak_manipulation::action::FollowTrajectory_SendGoal_Request;
  using Response = snaak_manipulation::action::FollowTrajectory_SendGoal_Response;
};

}  // namespace action

}  // namespace snaak_manipulation


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_GetResult_Request __declspec(deprecated)
#endif

namespace snaak_manipulation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTrajectory_GetResult_Request_
{
  using Type = FollowTrajectory_GetResult_Request_<ContainerAllocator>;

  explicit FollowTrajectory_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit FollowTrajectory_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_GetResult_Request
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_GetResult_Request
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTrajectory_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTrajectory_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTrajectory_GetResult_Request_

// alias to use template instance with default allocator
using FollowTrajectory_GetResult_Request =
  snaak_manipulation::action::FollowTrajectory_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace snaak_manipulation


// Include directives for member types
// Member 'result'
// already included above
// #include "snaak_manipulation/action/detail/follow_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_GetResult_Response __declspec(deprecated)
#endif

namespace snaak_manipulation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTrajectory_GetResult_Response_
{
  using Type = FollowTrajectory_GetResult_Response_<ContainerAllocator>;

  explicit FollowTrajectory_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit FollowTrajectory_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const snaak_manipulation::action::FollowTrajectory_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_GetResult_Response
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_GetResult_Response
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTrajectory_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTrajectory_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTrajectory_GetResult_Response_

// alias to use template instance with default allocator
using FollowTrajectory_GetResult_Response =
  snaak_manipulation::action::FollowTrajectory_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace snaak_manipulation

namespace snaak_manipulation
{

namespace action
{

struct FollowTrajectory_GetResult
{
  using Request = snaak_manipulation::action::FollowTrajectory_GetResult_Request;
  using Response = snaak_manipulation::action::FollowTrajectory_GetResult_Response;
};

}  // namespace action

}  // namespace snaak_manipulation


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "snaak_manipulation/action/detail/follow_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__snaak_manipulation__action__FollowTrajectory_FeedbackMessage __declspec(deprecated)
#endif

namespace snaak_manipulation
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FollowTrajectory_FeedbackMessage_
{
  using Type = FollowTrajectory_FeedbackMessage_<ContainerAllocator>;

  explicit FollowTrajectory_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit FollowTrajectory_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const snaak_manipulation::action::FollowTrajectory_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_FeedbackMessage
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__snaak_manipulation__action__FollowTrajectory_FeedbackMessage
    std::shared_ptr<snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTrajectory_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTrajectory_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTrajectory_FeedbackMessage_

// alias to use template instance with default allocator
using FollowTrajectory_FeedbackMessage =
  snaak_manipulation::action::FollowTrajectory_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace snaak_manipulation

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace snaak_manipulation
{

namespace action
{

struct FollowTrajectory
{
  /// The goal message defined in the action definition.
  using Goal = snaak_manipulation::action::FollowTrajectory_Goal;
  /// The result message defined in the action definition.
  using Result = snaak_manipulation::action::FollowTrajectory_Result;
  /// The feedback message defined in the action definition.
  using Feedback = snaak_manipulation::action::FollowTrajectory_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = snaak_manipulation::action::FollowTrajectory_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = snaak_manipulation::action::FollowTrajectory_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = snaak_manipulation::action::FollowTrajectory_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct FollowTrajectory FollowTrajectory;

}  // namespace action

}  // namespace snaak_manipulation

#endif  // SNAAK_MANIPULATION__ACTION__DETAIL__FOLLOW_TRAJECTORY__STRUCT_HPP_
