
#include <gpio_dr.h>

void setPINMODE ( port_e puerto , pin_e bit , uint8_t modo ){
	__RW uint32_t *p= ((__RW uint32_t *) 0x4002c040 );

	*(p + puerto*2 + bit/16 )&= ~(0x3<<bit);
	*(p + puerto*2 + bit/16 )|= (modo<<bit);
}

void setDIR ( port_e puerto , pin_e bit , uint8_t dir ){

	__RW uint32_t *p=((__RW uint32_t *) 0x2009c000);

	if(!dir){
		*(p + puerto*8) &= ~(0x1<<bit);
	}
	else{
		*(p + puerto*8) |= (0x1<<bit);
	}
}

void setPIN ( port_e puerto , pin_e bit , uint8_t estado ){
	__RW uint32_t *p=((__RW uint32_t *) 0x2009c018);

	if(estado){
		*(p + puerto*8) |= (0x1<<bit) ;
	}
	else{
		*(p + puerto*8 + 1) |= (0x1<<bit) ;
	}
}

bool_t getPIN(port_e puerto , pin_e bit , uint8_t actividad ){
	__RW uint32_t *p=((__RW uint32_t *) 0x2009c014);
	uint8_t ret;

	ret= (*(p+ puerto*8)>>bit)&(0x1);

	return(actividad ? ret:!ret);
}

void setTOGGLE (uint8_t puerto, uint8_t pin){
	setPIN(puerto,pin,	!getPIN(puerto, pin, ALTO));
}
