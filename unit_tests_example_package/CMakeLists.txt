cmake_minimum_required (VERSION 3.1)
project (unit_tests_example_package)

# Use C++14 : cmake >= 3.1
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

###################################
## catkin specific configuration ##
###################################

catkin_package(
  CATKIN_DEPENDS
  std_msgs
)

##############
# Executables
##############

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

# An example of a ROS node.
add_executable (my_main_node src/my_node.cpp)
target_link_libraries(my_main_node ${catkin_LIBRARIES})

##############
# Unit Tests
##############

if(CATKIN_ENABLE_TESTING)
  message("\n\nGoing to build the tests!\n\n")
  find_package(rostest REQUIRED)
  add_rostest_gtest(my_unit_test launch/node_launcher.launch test/MyClass_test.cpp)
  # catkin_add_gtest(my_unit_test test/MyClass_test.cpp)
  target_link_libraries(my_unit_test ${catkin_LIBRARIES})
endif()
