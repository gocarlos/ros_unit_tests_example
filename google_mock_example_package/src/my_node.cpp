//============================================================================
// Name        : my_node.cpp
// Author      : Carlos Gomes
// Version     :
// Copyright   : Copyright Carlos Gomes
// Description : Simple ROS node.
//============================================================================

#include <iostream>
#include <vector>

#include "ros/ros.h"

#include "MyClass.hpp"

int main(int argc, char **argv) {
  ros::init(argc, argv, "my_node");
  ros::NodeHandle n;

  sleep(2);
  std::cout << "Hello World, I'm a ROS node, I could do something..." << std::endl;

  return 0;
}
