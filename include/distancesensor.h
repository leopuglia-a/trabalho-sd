#include "setpin.h"
#include "led.h"
#include "uart.h"
#include "uart.h"
#include <avr/io.h>
#include <stdbool.h>
#include <util/delay.h>

#ifndef _distancesensor_h
#define _distancesensor_h

uint32_t i;
uint8_t j;
uint8_t finalecho;

void definedistpins(uint8_t trigger, uint8_t echo);

uint32_t distanceSensor (uint8_t trigger, uint8_t echo);



#endif