/*
 * interrupt.h
 *
 * Created: 12/13/2022 1:53:14 AM
 *  Author: MARIO
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "../../STD_TYPES.h"
#include "../../BIT_MATH.h"
#include "../../registars.h"
#include "../../MCAL/DIO/DIO.h"


#define Green_Yellow_case 1
#define Red_case 2


#define IRQ_AT_RISING_EDGE    0
#define PIN2   2

/*
-----SREG bit-------
*/
#define   IBIT  7

/*
-----MCUCR BITS-----
*/
#define  ISC00  0
#define  ISC01  1
#define  ISC10  2
#define  ISC11  3

/*-------MCUCSR bit----*/
#define ISC2  6

/*-----GICR-------*/
#define INT2_PIN    5
#define INT0_PIN    6
#define INT1_PIN    7

/*-----GIFR-------*/
#define INTF0  6
#define INTF1  7
#define INTF2  5




void General_Int_Enable(void);
void General_Int_Disable(void);
void CLOSE_INT0(void);
void ExINT_SetUp(uint8_t INT_PIN);








#endif /* INTERRUPT_H_ */