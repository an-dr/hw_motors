#include <Arduino.h>
#include "hw_motors.h"

#define PIN1 4
#define PIN2 5

Motor dc_motor(PIN1, PIN2);

void setup() {
}

void loop() {
    dc_motor.forward_or_clockwise();
    delay(300);
    dc_right.stop();
    delay(300);

    dc_motor.backward_or_counterclock();
    delay(300);
    dc_right.stop();
    delay(300);
}