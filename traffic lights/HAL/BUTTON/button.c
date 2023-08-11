/*
 * button.c
 *
 * Created: 12/11/2022 11:07:02 PM
 *  Author: MARIO
 */ 
#include "button.h"
#include "util/delay.h"

//button initalization 
void BUTTON_INIT(uint8_t buttonPort,uint8_t buttonPin){

		DIO_init(buttonPort,buttonPin,INPUT);
}


uint8_t  BUTTON_GET (uint8_t buttonPort,uint8_t buttonPin){
	
	DIO_GetPinValue(buttonPort,buttonPin);
	
}