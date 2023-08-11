/*
 * led.h
 *
 * Created: 12/11/2022 10:46:37 PM
 *  Author: MARIO
 */ 


#ifndef LED_H_
#define LED_H_


#include "../../MCAL/DIO/DIO.h"
#include "util/delay.h"
#include "../../MCAL/TIMER/timer.h"
#include "../../MCAL/INTERRUPT/interrupt.h"
#include <avr/delay.h>

#define Normal_case 1
 
void LED_INIT(uint8_t PORT,uint8_t PIN);   
uint8_t LED_ON(uint8_t PORT ,uint8_t PIN );
uint8_t LED_OFF(uint8_t PORT,uint8_t PIN);
uint8_t Get_LED_statue(uint8_t PORT,uint8_t PIN);


void  case_Normal();                      
void  case_GREEN_yellow_Traffic();
void  case_Red_Traffic();
#endif /* LED_H_ */