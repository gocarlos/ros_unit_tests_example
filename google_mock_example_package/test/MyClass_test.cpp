//============================================================================
// Name        : MyClass_test.cpp
// Author      : Carlos Gomes
// Version     :
// Copyright   : Copyright Carlos Gomes
// Description : Unit test
//============================================================================

#include "ros/ros.h"

#include "gtest/gtest.h"

#include "MyClass.hpp"

// Parameters for different tests.
constexpr std::size_t a = 1u;
constexpr std::size_t b = 2u;

TEST(TestSuite, test_case_1) {

  my_name_space::MyClass my_class;

  int c = my_class.add_two_ints(a, b);
  std::cout << "\n\n\nThis comes form inside of one test case\n\n\n";

  EXPECT_EQ(c, 3);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
