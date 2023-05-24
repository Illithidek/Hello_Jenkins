#include <gtest/gtest.h>

class Test: public ::testing::Test{ };

TEST_F(Test, goodTest){
  auto first = 1;
  auto second = 1;
  EXPECT_EQ(first, second);
}

TEST_F(Test, badTest){
  auto first = 0;
  auto second = 1;
  EXPECT_NE(first, second);
}
