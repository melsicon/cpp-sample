#include <iostream>
#include <string>

#include "lib/fizzbuzz.h"

int main(int argc, char **argv) {
  for (int i = 1; i <= 100; i++) {
    std::cout << fizzbuzz(i) << std::endl;
  }
  return 0;
}
