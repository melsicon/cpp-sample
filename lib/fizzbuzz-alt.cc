#include "lib/fizzbuzz-alt.h"

#include <fruit/fruit.h>

#include <string>

#include "absl/strings/string_view.h"
#include "main/fizzbuzz.h"

namespace {
constexpr absl::string_view FIZZ = "Fizz";
constexpr absl::string_view BUZZ = "Buzz";
constexpr absl::string_view FIZZBUZZ = "FizzBuzz";
}  // namespace

class FizzBuzzAltImpl : public FizzBuzz {
 public:
  INJECT(FizzBuzzAltImpl()) {}

  virtual std::string operator()(int n) const {
    long n2 = (long)n * n;
    long n4 = n2 * n2;
    switch (n4 % 15) {
      case 1:
        return std::to_string(n);
      case 6:
        return std::string(FIZZ);

      case 10:
        return std::string(BUZZ);

      case 0:
        return std::string(FIZZBUZZ);

      default:
        throw std::runtime_error("Unexpected residue in fizzbuzz.");
    }
  }
};

fruit::Component<FizzBuzz> getFizzBuzzAltComponent() {
  return fruit::createComponent().bind<FizzBuzz, FizzBuzzAltImpl>();
}
