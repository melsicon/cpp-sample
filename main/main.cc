#include "main/main.h"

#include <fruit/fruit.h>

#include <iostream>

int main(int, char**) {
  fruit::Injector<FizzBuzz> injector(getComponent);
  const FizzBuzz& fizzbuzz = injector.get<const FizzBuzz&>();

  for (int i = 1; i <= 100; i++) {
    std::cout << fizzbuzz(i) << std::endl;
  }

  return 0;
}
