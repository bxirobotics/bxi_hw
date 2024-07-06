cmake_minimum_required(VERSION 3.8)
project(example)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

file(GLOB_RECURSE source ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(communication REQUIRED)

set(TARGET_DEPENDENCE
  ament_cmake
  rclcpp
  sensor_msgs
  communication
)

add_executable(${PROJECT_NAME} ${source})
target_include_directories(${PROJECT_NAME}
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)

ament_target_dependencies(${PROJECT_NAME} ${TARGET_DEPENDENCE})

ament_package()
