
#include <pinsel_dr.h>

 void setPINSEL( uint8_t puerto, uint8_t pin, uint8_t modo )
 {
	 puerto=puerto*2 +pin/16;
	 pin = (pin%16)*2;

	 PINSEL[puerto] &= ~(0x3<<pin); //limpio el par de bits
	 PINSEL[puerto] |= (modo<<pin);
 }
