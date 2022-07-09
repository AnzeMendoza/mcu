#ifndef DR_GPIO_H_
#define DR_GPIO_H_

#include <tipo_de_dato.h>
#include "tipos.h"

# define GPIO ((__RW uint32_t*) 0x2009c000)

#define FIO0DIR		GPIO[0]
#define FIO0MASK	GPIO[4]
#define FIO0PIN		GPIO[5]
#define FIO0SET		GPIO[6]
#define FIO0CLR		GPIO[7]

#define FIO1DIR		GPIO[8]
#define FIO1MASK	GPIO[12]
#define FIO1PIN		GPIO[13]
#define FIO1SET		GPIO[14]
#define FIO1CLR		GPIO[15]

#define FIO2DIR		GPIO[16]
#define FIO2MASK	GPIO[20]
#define FIO2PIN		GPIO[21]
#define FIO2SET		GPIO[22]
#define FIO2CLR		GPIO[23]

#define FIO3DIR		GPIO[24]
#define FIO3MASK	GPIO[28]
#define FIO3PIN		GPIO[29]
#define FIO3SET		GPIO[30]
#define FIO3CLR		GPIO[31]

#define FIO4DIR		GPIO[32]
#define FIO4MASK	GPIO[36]
#define FIO4PIN		GPIO[37]
#define FIO4SET		GPIO[38]
#define FIO4CLR		GPIO[39]

#define 	ALTO	1
#define 	BAJO	0

#define 	SALIDA	1
#define 	ENTRADA	0

#define 	ON		1
#define 	OFF		0

#define 	FUNCION_GPIO		0
#define		FUNCION_1			1
#define 	FUNCION_2 			2
#define 	FUNCION_3 			3

typedef enum{
	PULLUP,
	REPEATER,
	NONE,
	PULLDOWN
} pin_mode_e;

void setDIR(port_e puerto, pin_e bit, port_e dir);
void setPINMODE(port_e puerto, pin_e bit,  modo);
void setPIN(port_e puerto, pin_e bit, port_e estado);
bool_t getPIN(port_e puerto, pin_e bit, uint8_t actividad);
void setTOGGLE(port_e puerto, pin_e pin);

#endif /* DR_GPIO_H_ */
