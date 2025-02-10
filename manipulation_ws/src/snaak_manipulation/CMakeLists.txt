cmake_minimum_required(VERSION 3.8)
project(snaak_manipulation)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories(${CMAKE_SOURCE_DIR}/include)


# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)

find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(tf2 REQUIRED) 
find_package(tf2_ros REQUIRED) 

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/FollowTrajectory.action"
  DEPENDENCIES geometry_msgs
)

install(PROGRAMS
  scripts/follow_trajectory.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
