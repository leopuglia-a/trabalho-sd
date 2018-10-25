#include <avr/io.h>
#include <avr/portpins.h>
#ifndef _delay_h
#define _delay_h

uint16_t time;

void u_delay(uint16_t totaltime);

void m_delay(uint16_t totaltime);


#endif