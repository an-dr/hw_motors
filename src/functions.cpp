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

#include "functions.hpp"
#include <stdio.h>

#pragma weak set_pin
void set_pin(int pin, bool value)
{
    printf("hw_motors: `set_pin` is not implemented! Do it by your own.\n");
}

#pragma weak init_write_pin
void init_write_pin(int pin)
{
    printf("hw_motors: `init_write_pin` is not implemented! Do it by your own.\n");
}

#pragma weak delay
void motors_delay(uint32_t ms)
{
    printf("hw_motors: `delay` is not implemented! Do it by your own.\n");
}