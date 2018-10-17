#include <avr/io.h>
#include <avr/portpins.h>
#include <util/delay.h>
#include "include/setpin.h"
#include "include/7segment.h"
#include "include/uart.h"

#define swt_bit(reg, pos) (reg ^= (1 << pos))	// mudança de estado
#define clr_bit(reg, pos) (reg &= ~(1 << pos))	// limpar os bits de uma pos
#define set_bit(reg, pos) (reg |= (1 << pos))	// setar bits 
#define isset_bit(reg, pos) (reg & (1 << pos)) // check if bit set

#define input 0
#define output 1
int main(void){	
  uart_init();

  definepin(4, 'a');
  definepin(5, 'b');
  definepin(6, 'c');
  definepin(7, 'd');
  definepin(8, 'e');
  definepin(9, 'f');
  definepin(10, 'g');

  display7seg('a');

	return 0;
}
