#include "distancesensor.h"

#define OUTPUT 1
#define INPUT 0

void definedistpins(uint8_t trigger, uint8_t echo){
	setpinmode(OUTPUT, trigger);
	setpinmode(INPUT, echo);	
}

uint32_t distanceSensor (uint8_t trigger, uint8_t echo){
	setpinvalue(OUTPUT, trigger);
	_delay_us(10);
	setpinvalue(INPUT, trigger);
	i = 0;
	j = 0;
	finalecho = echo % 8;

	if (echo >= 8){
		while (!isset_bit(PINB, finalecho));

		while (isset_bit(PINB, finalecho)){
			_delay_us(1);
			i++;
			j++;
			if (j >= 13){
				i += 10;
				j = 0;
			}
		}
	}

	else if (echo < 8){
		while (!isset_bit(PIND, finalecho));

		while (isset_bit(PIND, finalecho)){
			_delay_us(1);
			i++;
			j++;
			if (j >= 13){
				i += 10;
				j = 0;
			}
		}
	}

	return (i/29);
}