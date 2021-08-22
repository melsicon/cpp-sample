#include <iostream>

#include "lib/fizzbuzz.h"

int main(int, char **) {
  for (int i = 1; i <= 100; i++) {
    std::cout << fizzbuzz(i) << std::endl;
  }
  return 0;
}
