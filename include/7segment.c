#include "7segment.h"

// define pin as led in 7 segment display

// first arg = position in arduino
// second arg = what pin (a-g) will be defined in the position

void definepin(uint8_t position, char pin){


	if (pin == "a"){
		pina = position;
	}

	if (pin == "b"){
		pinb = position;
	}

	if (pin == "c"){
		pinc= position;
	}

	if (pin == "d"){
		pind = position;
	}

	if (pin == "e"){
		pine = position;
	}

	if (pin == "f"){
		pinf = position;
	}

	if (pin == "g"){
		ping = position;
	}

	if (pin == "h"){
		pinh = position;
	}
}

// need to off (clr) pin port to turn segment on
// show passed arg on in 7 segment display
void display7seg(char value){
	if (value == "a"){
		led_off(pina);
		led_off(pinb);
		led_off(pinc);
		led_off(pind);
		led_off(pine);
		led_on(pinf);
		led_off(ping);
	}
        switch(number){
            case 0:          
                clr_bit(PORTD, PD6);
                clr_bit(PORTD, PD4);
                clr_bit(PORTD, PD5);
                clr_bit(PORTD, PD7);
                clr_bit(PORTB, PB0);
                clr_bit(PORTB, PB1);
                set_bit(PORTB, PB2);
                break;
            // 1
            case 1:
                set_bit(PORTD, PD4);
                clr_bit(PORTD, PD5);
                clr_bit(PORTD, PD6);
                set_bit(PORTD, PD7);
                set_bit(PORTB, PB0);
                set_bit(PORTB, PB1);
                set_bit(PORTB, PB2);
                break;
            // 2
            case 2:
                clr_bit(PORTD, PD4);
                clr_bit(PORTD, PD5);
                set_bit(PORTD, PD6);
                clr_bit(PORTD, PD7);
                clr_bit(PORTB, PB0);
                set_bit(PORTB, PB1);
                clr_bit(PORTB, PB2);
                
                break;

            case 3: 
                clr_bit(PORTD, PD4);
                clr_bit(PORTD, PD5);
                clr_bit(PORTD, PD6);
                clr_bit(PORTD, PD7);
                set_bit(PORTB, PB0);
                set_bit(PORTB, PB1);
                clr_bit(PORTB, PB2);
                break;

            case 4:
                set_bit(PORTD, PD4);
                clr_bit(PORTD, PD5);
                clr_bit(PORTD, PD6);
                set_bit(PORTD, PD7);
                set_bit(PORTB, PB0);
                clr_bit(PORTB, PB1);
                clr_bit(PORTB, PB2);

                break;
        }
}

// clr bit acende o led