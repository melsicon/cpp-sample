#include <fruit/fruit.h>

#include "lib/fizzbuzz-alt.h"
#include "main/main.h"

fruit::Component<FizzBuzz> getComponent() {
  return fruit::createComponent().install(getFizzBuzzAltComponent);
}
