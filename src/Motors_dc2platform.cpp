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

#include "Motors_dc2platform.hpp"

Motors_dc2platform::Motors_dc2platform(uint32_t dcRightA_pin,
                                       uint32_t dcRightB_pin,
                                       uint32_t dcLeftA_pin,
                                       uint32_t dcLeftB_pin) {
    dc_right = Motor(dcRightA_pin, dcRightB_pin);
    dc_left = Motor(dcLeftA_pin, dcLeftB_pin);
}

void Motors_dc2platform::MoveForward() {
    dc_left.forward_or_clockwise();
    dc_right.forward_or_clockwise();
}

void Motors_dc2platform::MoveBackward() {
    dc_left.backward_or_counterclock();
    dc_right.backward_or_counterclock();
}

void Motors_dc2platform::MoveLeft() {
    dc_left.forward_or_clockwise();
    dc_right.backward_or_counterclock();
}

void Motors_dc2platform::MoveRight() {
    dc_left.backward_or_counterclock();
    dc_right.forward_or_clockwise();
}

void Motors_dc2platform::Stop() {
    dc_left.stop();
    dc_right.stop();
}