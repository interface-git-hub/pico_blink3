#include "src/pico_blink_lib/pico_blink_lib.hpp"

void setup() {
  BlinkInit();
}

void loop() {
  for (int i = 0; i < 3; i++) {
    BlinkLed();
  }
  delay(1000);
}
