// *************************************************************************
//
// Copyright (c) 2020 Andrei Gramakov. All rights reserved.
//
// This file is licensed under the terms of the MIT license.
// For a copy, see: https://opensource.org/licenses/MIT
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#pragma once

#include <stdio.h>
#include <string.h>
#include "functions.hpp"
// =============================================================================
// Not implemented
// =============================================================================
void set_pin(int pin, bool value);
bool get_pin(int pin);
void init_write_pin(int pin);
void init_read_pin(int pin);
void send(char *msg, int str_size);

// =============================================================================
// Class
// =============================================================================
class Motor {
public:
    Motor();
    Motor(int pinA, int pinB);

    int pinA, pinB;

    void set_pins(int pinA, int pinB);
    void forward_or_clockwise();
    void backward_or_counterclock();
    void stop();
};
