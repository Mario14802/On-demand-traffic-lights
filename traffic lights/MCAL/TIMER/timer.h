/*
 * timer.h
 *
 * Created: 12/12/2022 5:23:30 PM
 *  Author: MARIO
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "../../STD_TYPES.h"
#include "../../BIT_MATH.h"
#include "../../registars.h"




#define NORMAL_MODE       0

#define PRE_1     1
#define PRE_8     2
#define PRE_64    3
#define PRE_256   4
#define PRE_1024  5


#define TIMER0_MODE              NORMAL_MODE    
#define TIMER0_FREQ	                PRE_1024    //for prescalar frequency


//-----TCCR0-------------
#define FOC0   7
#define WGM00  6
#define COM01  5
#define COM00  4
#define WGM01  3
#define CS02   2
#define CS01   1
#define CS00   0

//---------TIMSK--------------
#define OCIE2  7
#define TOIE2  6
#define TICIE1 5
#define OCIE1A 4
#define OCIE1B 3
#define	TOIE1 2
#define OCIE0 1
#define TOIE0  0


#define TOVO 0

void Timer0_INIT (void);
void Timer0_Prescalar(void);
void TIMER0_DELAY(void);
void TIMER0_blink();
void Timer0_Stop (void);

#endif /* TIMER_H_ */