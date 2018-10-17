#include "button.h"

// set pin as button

// dois tipos de botao
// botao tem que ter um estado
// exemplo: estado inicial é false
// um tipo de botao quando apertar ele vai virar true
// e quando soltar vira false novamente
// o outro tipo quando apertar vira true
// e quando soltar continua true

void set_button(uint8_t position){
	uint8_t pin;


	pin = finalpos(position);

	if (position >= 8){
		clr_bit(DDRB, pin);
		set_bit(PORTB, pin);
	}

	else if (position < 8){
		clr_bit(DDRD, pin);
		set_bit(PORTD, pin);
	}

}
   
// if button is pressed return 1

uint8_t isbuttonpressed(uint8_t position, uint8_t hold){

	uint8_t pin;
	pin = finalpos(position);
	uint8_t pressed = 0;
	if (position < 8){
		if(!isset_bit(PIND, pin)){
        	pressed = 1;
    	}

    	if (hold){
    		while(!isset_bit(PIND, pin)){

    		}
    		_delay_ms(30);
    	}
	}


    else {
    	if(!isset_bit(PINB, pin)){
        	pressed = 1;
    	}

    	if (hold){
    		while(!isset_bit(PINB, pin)){

    		}
    		_delay_ms(30);
    	}
    }

    
    return pressed;
}