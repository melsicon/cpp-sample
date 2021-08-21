#include "lib/fizzbuzz.h"

#include <gtest/gtest.h>

TEST(FizzBuzzTest, BasicAssertions) {
  EXPECT_EQ(fizzbuzz(1), "1");
  EXPECT_EQ(fizzbuzz(3), "Fizz");
  EXPECT_EQ(fizzbuzz(5), "Buzz");
  EXPECT_EQ(fizzbuzz(15), "FizzBuzz");
}
