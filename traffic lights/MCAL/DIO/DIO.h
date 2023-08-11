/*
 * DIO.h
 *
 * Created: 12/11/2022 9:31:44 PM
 *  Author: MARIO
 */ 
#include "../../STD_TYPES.h"
#include "../../BIT_MATH.h"
#include "../../registars.h"


#ifndef DIO_H_
#define DIO_H_

typedef enum{DIO_PORTA,DIO_PORTB,DIO_PORTC,DIO_PORTD} PORT_TYPE ;
	
typedef enum{INPUT,OUTPUT} PIN_DIRECTION ;
typedef enum{LOW,HIGH} PIN_VALUE;
	
	
typedef enum {Pin0,Pin1,Pin2,Pin3,Pin4,Pin5,Pin6,Pin7} PIN_TYPE;


void DIO_init(PORT_TYPE ,PIN_TYPE ,PIN_DIRECTION );
void DIO_SetPinValue(PORT_TYPE,PIN_TYPE, PIN_VALUE );
uint8_t  DIO_GetPinValue(PORT_TYPE,PIN_TYPE );
void DIO_TogglePinValue(PORT_TYPE,PIN_TYPE );
#endif /* DIO_H_ */