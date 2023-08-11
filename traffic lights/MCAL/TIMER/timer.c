/*
 * timer.c
 *
 * Created: 12/12/2022 5:23:19 PM
 *  Author: MARIO
 */ 
#include "timer.h"


void Timer0_INIT(){                      //STARTING THE TIMER->SELECTIONG THE MODE

	if (TIMER0_MODE==NORMAL_MODE){
		
		
		CLEAR_BIT(TCCR0,WGM00);
		CLEAR_BIT(TCCR0,WGM01);
	}
}
void Timer0_Prescalar(){                                //choosing the prescaler clock
	
	switch(TIMER0_FREQ){
		
		case PRE_1024: {
			SET_BIT(TCCR0,CS00);
			CLEAR_BIT(TCCR0,CS01);
			SET_BIT(TCCR0,CS02);
		} break;
		case PRE_256: {
			CLEAR_BIT(TCCR0,CS00);
			CLEAR_BIT(TCCR0,CS01);
			SET_BIT(TCCR0,CS02);
		} break;
		
		
		case PRE_64: {
			SET_BIT(TCCR0,CS00);
			SET_BIT(TCCR0,CS01);
			CLEAR_BIT(TCCR0,CS02);
		} break;
		
		
		case PRE_8: {
			
			CLEAR_BIT(TCCR0,CS00);
			SET_BIT(TCCR0,CS01);
			CLEAR_BIT(TCCR0,CS02);
		} break;
		
		
		case PRE_1: {
			
			SET_BIT(TCCR0,CS00);
			CLEAR_BIT(TCCR0,CS01);
			CLEAR_BIT(TCCR0,CS02);
		} break;
		
		
	}
}
void TIMER0_DELAY(){
	
//INITIAZLIZE THE COUNTER WITH 0;
	     TCNT0=0;
		u16 overFlow=0;
		//loop to delay for 5s
		 while (overFlow<19)
		 {
			 while ((GET_BIT(TIFR,TOVO))==0);        
			 SET_BIT(TIFR,TOVO);
				 
				 overFlow++;
		 }
		 overFlow =0;
	TCNT0=0;
}
void TIMER0_blink(){
	
	//INITIAZLIZE THE COUNTER WITH 0;
	TCNT0=0;
	u16 overFlow=0;
	//loop to delay for 1s
	while (overFlow<4)
	{
		while ((GET_BIT(TIFR,TOVO))==0);
		SET_BIT(TIFR,TOVO);
		
		overFlow++;
	}
	overFlow =0;
	TCNT0=0;
}


void Timer0_Stop(){
	
	CLEAR_BIT(TCCR0,CS00);
	CLEAR_BIT(TCCR0,CS01);
	CLEAR_BIT(TCCR0,CS02);
	
}