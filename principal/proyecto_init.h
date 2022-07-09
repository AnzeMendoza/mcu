
#ifndef INITPROYECTO_H_
#define INITPROYECTO_H_

#include <gpio_dr.h>
#include <infotronic.h>
#include <pinsel_dr.h>
#include <pll_dr.h>
#include <systick_dr.h>
#include "tipos.h"

#define	LED1	2,7
#define	LED2	1,29
#define	LED3	4,28
#define	LED4	1,23
#define	LED5	1,20
#define	LED6	0,19
#define	LED7	3,26
#define	LED8	1,25

#define ED0		1,19

void initPLL();
void initPlacaInfotronic(void);
void inicializacion ( void );
void initGPIO(void);
void systickInit();


#endif /* INITPROYECTO_H_ */
