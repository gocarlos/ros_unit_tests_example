# Dead simple ROS package with unit tests

[![Build Status](https://travis-ci.org/gocarlos/ros_unit_tests_example.svg?branch=master)](https://travis-ci.org/gocarlos/ros_unit_tests_example)

[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)

## USAGE - RUN
```bash
$ cd ~/catkin_ws/src # go to source directory of your catkin workspace
$ git clone https://github.com/gocarlos/ros_unit_tests_example.git
$ cd ~/catkin_ws/

# BUILD PROJECT

# When using catkin_make
$ catkin_make
$ catkin_make run_test

# When using catkin_tools
catkin build --catkin-make-args run_tests

# Or if only want to build the workspace and after that run the tests
# The launch file can also be used to set parameters etc. 
catkin build
rostest ros_unit_tests_example node_launcher.launch
```
