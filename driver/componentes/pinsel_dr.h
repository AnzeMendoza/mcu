
#ifndef DR_PINSEL_H_
#define DR_PINSEL_H_

#include "tipos.h"

#define PINSEL	((__RW uint32_t* )0x4002c000)

#define PINSEL0 	PINSEL[0]
#define PINSEL1 	PINSEL[1]
#define PINSEL2 	PINSEL[2]
#define PINSEL3		PINSEL[3]
#define PINSEL4		PINSEL[4]
#define PINSEL5		PINSEL[5] //no se usa
#define PINSEL6		PINSEL[6] //no se usa
#define PINSEL7		PINSEL[7]
#define PINSEL8	 	PINSEL[8] //no se usa
#define PINSEL9	 	PINSEL[9]
#define PINSEL10	PINSEL[10]

#define PINMODE ((__RW uint32_t*) 0x4002c040)

#define PINMODE0		PINMODE[0]
#define PINMODE1		PINMODE[1]
#define PINMODE2		PINMODE[2]
#define PINMODE3		PINMODE[3]
#define PINMODE4		PINMODE[4]
#define PINMODE5		PINMODE[5]
#define PINMODE6		PINMODE[6]
#define PINMODE7		PINMODE[7]
#define PINMODE9		PINMODE[9]

#define PINMODE_OD		((__RW uint32_t* ) 0x4002c068)

#define PINMODE_OD0		PINMODE_OD[0]
#define PINMODE_OD1		PINMODE_OD[1]
#define PINMODE_OD2		PINMODE_OD[2]
#define PINMODE_OD3		PINMODE_OD[3]
#define PINMODE_OD4		PINMODE_OD[4]


 void setPINSEL( uint8_t puerto, uint8_t pin, uint8_t modo );

#endif /* DR_PINSEL_H_ */
