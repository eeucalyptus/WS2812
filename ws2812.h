/*
   Copyright 2018 eeucalyptus <dev@eeucalyptus.net>

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef WS2812_H_
#define WS2812_H_

#include "stdint.h"

/**
* Initialize a WS2812 bus using the given configuration
*/
void WS2812_Init(WS2812_Port_Config_t *config);

/**
* Shift out one pixel
*/
bool WS2812_Shift(SoftI2C_Port_Config_t *config, uint32_t pixel);

/**
* Latch frame
*/
bool WS2812_Latch(SoftI2C_Port_Config_t *config);

/**
* Send one full frame (shift buffer and latch).
* First pixel will be transmitted last (back to front!)
*/
bool WS2812_SendBuffer(SoftI2C_Port_Config_t *config, uint32_t *pixels, uint16_t length);

#endif // WS2812_H_
