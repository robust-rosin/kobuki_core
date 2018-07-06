#include "kobuki_driver/kobuki.hpp"
#include <ros/ros.h>
#include <gtest/gtest.h>

// Declare a test
TEST(TestSuite, testCase)
{
  kobuki::Kobuki kobuki;
  EXPECT_TRUE(kobuki.isNanHeading());
}

// Run all the tests that were declared with TEST()
int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "tester");
  ros::NodeHandle nh;
  return RUN_ALL_TESTS();
}