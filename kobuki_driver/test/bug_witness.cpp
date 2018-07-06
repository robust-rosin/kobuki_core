#include "kobuki_driver/kobuki.hpp"
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
  return RUN_ALL_TESTS();
}