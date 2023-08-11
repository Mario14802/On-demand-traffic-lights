/*
 * button.h
 *
 * Created: 12/11/2022 11:07:24 PM
 *  Author: MARIO
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_




#include "util/delay.h"
#include "../../BIT_MATH.h"
#include "../../STD_TYPES.h"
#include "../../MCAL/DIO/DIO.h"


#define PRESSED  1
#define RELEASED 0

void BUTTON_INIT(uint8_t buttonPort,uint8_t buttonPin);
uint8_t BUTTON_GET (uint8_t buttonPort,uint8_t buttonPin);



#endif /* BUTTON_H_ */