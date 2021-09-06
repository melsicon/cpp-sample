#include <fruit/fruit.h>

#include "lib/fizzbuzz.h"
#include "main/main.h"

fruit::Component<FizzBuzz> getComponent() {
  return fruit::createComponent().install(getFizzBuzzComponent);
}
