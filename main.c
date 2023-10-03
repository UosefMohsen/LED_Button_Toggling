/*
* BushBotton.c
*
* Created: 23/09/2023 08:45:00 ?
* Author : youssef
*/
#define F_CPU 16000000ul
#include <avr/io.h>
#include "STDMACROS.h"
#include <util/delay.h>

int main(void)
{
	clear_bit(DDRB,0);
	clear_bit(DDRD,6);
	set_bit(DDRC,2);
	set_bit(DDRC,7);
	
	while (1)
	{
		if(read_bit(PINB,0) == 1)
		{
			toggle_bit(PORTC,2);
			while(read_bit(PINB,0) == 1);
		}
		
		if (read_bit(PIND,6) ==1 )
		{
			toggle_bit(PORTC,7);
			while(read_bit(PIND,6) ==1);
		}
		
		
	}
}