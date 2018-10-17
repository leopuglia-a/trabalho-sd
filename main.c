#include <avr/io.h>
#include <avr/portpins.h>
#include <util/delay.h>
#include "include/setpin.h"
#include "include/7segment.h"
#include "include/uart.h"
#include "include/button.h"

#define swt_bit(reg, pos) (reg ^= (1 << pos))	// mudança de estado
#define clr_bit(reg, pos) (reg &= ~(1 << pos))	// limpar os bits de uma pos
#define set_bit(reg, pos) (reg |= (1 << pos))	// setar bits 
#define isset_bit(reg, pos) (reg & (1 << pos)) // check if bit set

#define input 0
#define output 1
int main(void){	
  uart_init();
  setpinmode(1, 8);
  set_button(9);
  while(1){
    if (isbuttonpressed(9, 0)){
     blink_led(8, 200);
    }
  }

	return 0;
}
