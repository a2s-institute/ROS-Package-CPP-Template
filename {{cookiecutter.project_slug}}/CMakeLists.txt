cmake_minimum_required(VERSION 3.0.2)
project({{ cookiecutter.project_slug }})

add_compile_options(-std=c++14)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  rostest
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES {{ cookiecutter.project_slug }}
  CATKIN_DEPENDS roscpp std_msgs
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME}_node src/{{ cookiecutter.project_slug }}_ros_node.cpp)
add_library(${PROJECT_NAME} src/{{ cookiecutter.project_slug }}.cpp src/{{ cookiecutter.project_slug }}_ros.cpp)

target_link_libraries(${PROJECT_NAME}_node
  ${catkin_LIBRARIES}
  ${PROJECT_NAME}
)

# Testing configuration
if(CATKIN_ENABLE_TESTING)
  # Find rostest and gtest packages
  find_package(rostest REQUIRED)
  find_package(GTest REQUIRED)
  
  # Add rostest_gtest
  add_rostest_gtest(${PROJECT_NAME}_test
    test/test_${PROJECT_NAME}.launch  # Use a launch file for rostest
    test/test_${PROJECT_NAME}.cpp     # Test file with Google Test
  )
  
  # Link the test executable with the required libraries
  target_link_libraries(${PROJECT_NAME}_test
    ${catkin_LIBRARIES}
    ${PROJECT_NAME}
    ${GTEST_LIBRARIES}  # Link Google Test libraries
  )
endif()