#include "lib/fizzbuzz.h"

#include <fruit/fruit.h>
#include <gtest/gtest.h>

#include "lib/fizzbuzz-alt.h"

class FizzBuzzTest : public testing::TestWithParam<const FizzBuzz *> {};

TEST_P(FizzBuzzTest, BasicAssertions) {
  const FizzBuzz *fizzbuzz = GetParam();
  EXPECT_EQ((*fizzbuzz)(1), "1");
  EXPECT_EQ((*fizzbuzz)(3), "Fizz");
  EXPECT_EQ((*fizzbuzz)(5), "Buzz");
  EXPECT_EQ((*fizzbuzz)(15), "FizzBuzz");
}

fruit::Injector<FizzBuzz> injector(getFizzBuzzComponent);
fruit::Injector<FizzBuzz> injectorAlt(getFizzBuzzAltComponent);

INSTANTIATE_TEST_SUITE_P(FizzBuzzing, FizzBuzzTest,
                         testing::Values(injector.get<const FizzBuzz *>(),
                                         injectorAlt.get<const FizzBuzz *>()));
