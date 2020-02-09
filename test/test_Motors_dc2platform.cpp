#include <Arduino.h>
#include "hw_motors.h"

#define PINR1 4
#define PINR2 5
#define PINL1 6
#define PINL2 7
#define DEBUG

Motors_dc2platform wheels(PINR1, PINR2, PINL1, PINL2);

void test(void) {
    wheels.MoveBackward();
    delay(300);
    wheels.Stop();
    delay(300);
    wheels.MoveForward();
    delay(300);
    wheels.Stop();
    delay(300);
}

void setup() {
    test();
}

void loop() {
}