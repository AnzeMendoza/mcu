
#include <systick_dr.h>

void systickInit(void){
	STRELOAD = (STCALIB/4)-1;
	STCURR = 0;
	ENABLE = 1;
	TICKINT = 1;
	CLKSOURCE = 1;
}

#define SEGUNDO_SYSTICK 400

void SysTick_Handler(void){

	static int segundo = 800;

	if(segundo > 400){
		setPIN(PORT0, PIN22, HIGH);
	} else if( segundo <=0 && segundo>0){
		setPIN(PORT0, PIN22, LOW);
	} else {
		segundo=800;
	}
	segundo--;
}
