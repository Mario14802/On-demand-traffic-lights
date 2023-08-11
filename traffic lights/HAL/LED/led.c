/*
 * led.c
 *
 * Created: 12/11/2022 10:46:25 PM
 *  Author: MARIO
 */ 


#include "led.h"

//led initalization 
void LED_INIT(uint8_t PORT,uint8_t PIN){          
	
        DIO_init(PORT,PIN,OUTPUT);	   
}

uint8_t LED_ON(uint8_t PORT,uint8_t PIN){
	
	DIO_SetPinValue(PORT,PIN,HIGH);
	return 1;
}

uint8_t LED_OFF(uint8_t PORT,uint8_t PIN){
	
	DIO_SetPinValue(PORT,PIN,LOW);
	return 2;
}
// this function shows if the the led is on or off
uint8_t Get_LED_statue(uint8_t PORT,uint8_t PIN){
	
	DIO_GetPinValue(PORT,PIN);
	
}

void TOGG_LED(uint8_t PORT,uint8_t PIN){

	DIO_TogglePinValue(PORT,PIN);
	
}

void case_Normal(){
	
	
	LED_ON(DIO_PORTA,Pin0);///GREEN TRAFFIC
	TIMER0_DELAY();
	LED_OFF(DIO_PORTA,Pin0);///GREEN TRAFFIC
	
	LED_ON(DIO_PORTA,Pin1);//YELLOW TRAFFIC
	TIMER0_DELAY();
	LED_OFF(DIO_PORTA,Pin1);//YELLOW TRAFFIC
	
	LED_ON(DIO_PORTA,Pin2);//RED TRAFFIC
	TIMER0_DELAY();
	LED_OFF(DIO_PORTA,Pin2);//RED TRAFFIC
	
	
	
}

void case_GREEN_yellow_Traffic(){
	
			LED_OFF(DIO_PORTA,Pin0);//GREEN traffic
			LED_OFF(DIO_PORTA,Pin1);//YELLOW traffic 
			
			LED_ON(DIO_PORTB,Pin1);// YELLOW pedestrian
	     	LED_ON(DIO_PORTA,Pin1);//YELLOW traffic
			TIMER0_DELAY();
 			LED_OFF(DIO_PORTB,Pin1);// YELLOW pedestrian
     		LED_OFF(DIO_PORTA,Pin1);//YELLOW traffic
			
			LED_ON(DIO_PORTB,Pin0); //GREEN pedestrian
			LED_ON(DIO_PORTA,Pin2);//RED traffic
			TIMER0_DELAY();
			LED_OFF(DIO_PORTB,Pin0);//GREEN pedestrian
			LED_OFF(DIO_PORTA,Pin2);//RED traffic
		
		

}

void case_Red_Traffic(){
	
		LED_OFF(DIO_PORTA,Pin2);//RED traffic
		
		LED_ON(DIO_PORTB,Pin0); //GREEN pedestrian
		LED_ON(DIO_PORTA,Pin2);//RED traffic
		TIMER0_DELAY();
		LED_OFF(DIO_PORTB,Pin0);//GREEN  pedestrian
		LED_OFF(DIO_PORTA,Pin2);//RED traffic
		
		TOGG_LED(DIO_PORTB,Pin1);// YELLOW  pedestrian
		TOGG_LED(DIO_PORTA,Pin1);//YELLOW traffic
		TIMER0_DELAY();
		LED_OFF(DIO_PORTB,Pin1);// YELLOW  pedestrian
		LED_OFF(DIO_PORTA,Pin1);//YELLOW traffic
	

	
}


