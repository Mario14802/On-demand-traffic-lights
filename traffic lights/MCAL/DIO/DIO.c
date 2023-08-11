/*
 * DIO.c
 *
 * Created: 12/11/2022 9:31:35 PM
 *  Author: MARIO
 */ 
  
#include "DIO.h"  
  

void DIO_init(PORT_TYPE port ,PIN_TYPE pin, PIN_DIRECTION Dir ){
	
	switch (port)
	{
		case DIO_PORTA:
		(Dir==OUTPUT)? (SET_BIT(DDRA,pin)):(CLEAR_BIT(DDRA,pin)) ;//i used (?) to make it more generalized 
		break;
		
		case DIO_PORTB:
		(Dir==OUTPUT)? (SET_BIT(DDRB,pin)):(CLEAR_BIT(DDRB,pin)) ;
		break;
		
		case DIO_PORTC:
		(Dir==OUTPUT)? (SET_BIT(DDRC,pin)):(CLEAR_BIT(DDRC,pin)) ;
		break;
		
		case DIO_PORTD:
		(Dir==OUTPUT)? (SET_BIT(DDRD,pin)):(CLEAR_BIT(DDRD,pin)) ;
		break;
	}
}


void DIO_SetPinValue(PORT_TYPE port ,PIN_TYPE pin , PIN_VALUE val ){
	
switch (port)
   {
	case DIO_PORTA:
	if(val==HIGH)
	SET_BIT(PORTA,pin);
    if(val==LOW)
	CLEAR_BIT(PORTA,pin) ;
	break;
	
	case DIO_PORTB:
	(val==HIGH)? (SET_BIT(PORTB,pin)):(CLEAR_BIT(PORTB,pin)) ;
	break;
	
	case DIO_PORTC:
	(val==HIGH)? (SET_BIT(PORTC,pin)):(CLEAR_BIT(PORTC,pin)) ;
	break;
	
	case DIO_PORTD:
	(val==HIGH)? (SET_BIT(PORTD,pin)):(CLEAR_BIT(PORTD,pin)) ;
	break;
    }
}

uint8_t  DIO_GetPinValue(PORT_TYPE port ,PIN_TYPE pin  )	{
	
	switch(port){
		
		case  DIO_PORTA :	return GET_BIT(PINA,pin);
		case  DIO_PORTB :   return GET_BIT(PINB,pin);
		case  DIO_PORTC :   return GET_BIT(PINC,pin);
		case  DIO_PORTD :   return GET_BIT(PIND,pin);
		
		
	}
	
	
}


void DIO_TogglePinValue(PORT_TYPE port ,PIN_TYPE pin){
	
	
	switch (port)
	{
		case DIO_PORTA:
		TOGGLE_BIT(PORTA,pin);
		break;
		
		case DIO_PORTB:
		TOGGLE_BIT(PORTB,pin) ;
		break;
		
		case DIO_PORTC:
		TOGGLE_BIT(PORTC,pin) ;
		break;
		
		case DIO_PORTD:
		TOGGLE_BIT(PORTD,pin) ;
		break;
	}
	
	
	
}
