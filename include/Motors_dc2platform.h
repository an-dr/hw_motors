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

#include <stdint.h>
#include "Motor.h"

class Motors_dc2platform {
   private:
    Motor dc_left;
    Motor dc_right;

   public:
    Motors_dc2platform();
    Motors_dc2platform(uint32_t dcRightA_pin, uint32_t dcRightB_pin,
                       uint32_t dcLeftA_pin, uint32_t dcLeftB_pin);

    void MoveForward(void);
    void MoveBackward(void);
    void MoveLeft(void);
    void MoveRight(void);
    void Stop(void);
};
