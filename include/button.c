#include "button.h"

void set_button(uint8_t position){
	uint8_t pin;


	pin = finalpos(position);

	if (position >= 8){
		clr_bit(DDRB, pin);
		set_bit(PORTB, pin);
	}

	if (position < 8){
		clr_bit(DDRD, pin);
		set_bit(PORTB, pin);
	}

}
    
uint8_t isbuttonpressed(uint8_t position){

	uint8_t pin;
	pin = finalpos(position);
	uint8_t pressed = 0;

    if(!isset_bit(PIN, P)){
        pressed = 1;
    }
    
    return pressed;
}