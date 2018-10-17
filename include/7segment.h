#include "setpin.h"
#include "led.h"
#include "uart.h"

#ifndef _7segment_h
#define _7segment_h
        
uint8_t pina, pinb, pinc, pind, pine, pinf, ping, pinh;

void definepin(uint8_t pos, char pin);
void display7seg (char value);

#endif


