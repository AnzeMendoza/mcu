
#ifndef TIPOS_H_
#define TIPOS_H_

#define     __R					volatile const  	// !< Modificador para solo lectura
#define 	__W     			volatile 	       	// !<  Modificador para solo escritura
#define 	__RW				volatile           	// !< Modificador lectura / escritura
#define 	ON					1
#define 	OFF					0

#define 	NULL				(( void *) 0)

typedef		unsigned int		uint32_t;
typedef		short unsigned int	uint16_t;
typedef		unsigned char		uint8_t ;
typedef		int					int32_t;
typedef		short int			int16_t;
typedef		char				int8_t;

#endif /* TIPOS_H_ */
