
#include <proyecto_init.h>

void inicializacion ( void )
{
	initPLL();
	systickInit();
	initGPIO();
	initPlacaInfotronic();
}

void initPlacaInfotronic(void){
	setPINSEL(RGB_B,FUNCION_1);	 // hace que el led RGB se apague al encender la placa.
	setPINSEL(RGB_R,FUNCION_1);
	setPINSEL(RGB_G,FUNCION_1);

	setPINSEL(RELE3, FUNCION_GPIO); // pone en 0 el rele 3 y apaga el led encendido
	setDIR(RELE3,SALIDA);
	setPIN(RELE3,OFF);

	setPINSEL(1,31, FUNCION_3);
	setDIR(1,31, SALIDA);
}

void initGPIO(void){
	setPINSEL(RELE0, FUNCION_GPIO);
	setDIR(RELE0, SALIDA);

	setPINSEL(RELE1, FUNCION_GPIO);
	setDIR(RELE1, SALIDA);

	setPINSEL(RELE2, FUNCION_GPIO);
	setDIR(RELE2, SALIDA);

	setPINSEL(RELE3, FUNCION_GPIO);
	setDIR(RELE3, SALIDA);

	setPINSEL(LED_STICK, FUNCION_GPIO);
	setDIR(LED_STICK, SALIDA);
}

