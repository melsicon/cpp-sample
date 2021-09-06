#ifndef MAIN_FIZZBUZZ_H_
#define MAIN_FIZZBUZZ_H_

#include <string>

class FizzBuzz {
 public:
  virtual std::string operator()(int n) const = 0;
};

#endif
