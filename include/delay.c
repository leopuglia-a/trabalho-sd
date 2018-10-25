#include "delay.h"

void u_delay(uint16_t totaltime){
	for (time = 0; time <= totaltime; time++)
		asm("ldi r18, 5 \n"
			"1: \n"
			"dec r18 \n"
			"brne 1b \n"
			"nop \n");
}

void m_delay(uint16_t totaltime){
	for (time = 0; time <= totaltime; time++)
		asm("ldi r18, 21 \n"
			"ldi r19, 199 \n"
			"1: \n"
			"dec r19 \n"
			"brne 1b \n"
			"dec r18 \n"
			"brne 1b \n");
}

