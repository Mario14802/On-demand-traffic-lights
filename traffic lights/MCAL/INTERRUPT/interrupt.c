/*
 * CFile1.c
 *
 * Created: 12/13/2022 1:52:47 AM
 *  Author: MARIO
 */ 

#include "interrupt.h"



void General_Int_Enable(void){
	SET_BIT(SREG,IBIT);//GIE=1
}

void General_Int_Disable(void){
	CLEAR_BIT(SREG,IBIT);//GIE=0
}

void ExINT_SetUp(uint8_t INT_PIN){

	switch (INT_PIN){
		
		case INT0_PIN:
		
	     	SET_BIT(GICR,INT0_PIN);       //Enable INT0

			SET_BIT(MCUCR,ISC00);         //     for any logical change
			CLEAR_BIT(MCUCR,ISC01);
			
		
		
		
	}
}

void CLOSE_INT0(void){	CLEAR_BIT(GICR,INT0_PIN);} //to stop interrupt

