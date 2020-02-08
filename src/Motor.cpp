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

#include "Motor.h"

Motor::Motor(int pinA, int pinB) :
		pinA(pinA), pinB(pinB)
{
	init_write_pin(pinA);
	init_write_pin(pinB);
}

void Motor::set_pins(int pinA, int pinB)
{
	this->pinA = pinA;
	this->pinB = pinB;
}

void Motor::forward_or_clockwise()
{
	set_pin(pinA, true);
	set_pin(pinB, false);

}

void Motor::backward_or_counterclock()
{
	set_pin(pinA, false);
	set_pin(pinB, true);
}

void Motor::stop()
{
	set_pin(pinA, false);
	set_pin(pinB, false);
}

Motor::Motor() :
		pinA(0), pinB(0)
{

}