#include "bitop.h"
#include "setpin.h"
#include <util/delay.h>

#ifndef _button_h
#define _button_h

uint8_t isbuttonpressed(uint8_t position);

void set_button(uint8_t position);

#endif
