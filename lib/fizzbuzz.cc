#include "lib/fizzbuzz.h"

#include <string>

namespace {
constexpr std::string_view FIZZ = "Fizz";
constexpr std::string_view BUZZ = "Buzz";
constexpr std::string_view FIZZBUZZ = "FizzBuzz";
}  // namespace

std::string fizzbuzz(int n) {
  bool divisible_by_3 = n % 3 == 0;
  bool divisible_by_5 = n % 5 == 0;

  if (divisible_by_3 && divisible_by_5) {
    return std::string(FIZZBUZZ);
  } else if (divisible_by_3) {
    return std::string(FIZZ);
  } else if (divisible_by_5) {
    return std::string(BUZZ);
  } else {
    return std::to_string(n);
  }
}
