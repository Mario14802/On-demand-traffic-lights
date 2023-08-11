/*
 * registars.h
 *
 * Created: 12/11/2022 8:49:33 PM
 *  Author: MARIO
 */ 

#ifndef REGISTARS_H_
#define REGISTARS_H_
 
                         //*******************************//
                                 //DIO Registers 
                         //*******************************//	 
//PORTD Register//	
#define PIND            (*((volatile uint8_t *)  (0x30)))
#define DDRD			(*((volatile uint8_t *)  (0x31)))
#define PORTD			(*((volatile uint8_t *)  (0x32)))

//PORTC Register
#define PINC			(*((volatile uint8_t *)  (0x33)))
#define DDRC			(*((volatile uint8_t *)  (0x34)))
#define PORTC			(*((volatile uint8_t *)  (0x35)))

//PORTD Register
#define PINB			(*((volatile uint8_t *)  (0X36)))
#define DDRB			(*((volatile uint8_t *)  (0X37)))
#define PORTB			(*((volatile uint8_t *)  (0X38)))

//PORTA Register
#define PINA			(*((volatile uint8_t *) (0X39)))
#define DDRA			(*((volatile uint8_t *) (0X3A)))
#define PORTA			(*((volatile uint8_t *) (0X3B)))


//*******************************//
//TIMER0 Register
//*******************************//

#define  SREG  (*((volatile uint8_t *)(0x5F)))	  //i-bit
#define  TCCR0 (*((volatile uint8_t *)(0x53)))	  // WGM00/01  CS00/01/02
#define  TCNT0 (*((volatile uint8_t *)(0x52)))	  // counting register
#define  OCR0  (*((volatile uint8_t *)(0x5C)))	  // Comparing register
#define  TIMSK (*((volatile uint8_t *)(0x59)))	  // interrupt enable  for OVF,CTC
#define  TIFR  (*((volatile uint8_t *) (0x58)))	  //int flag
			 

//*******************************//
//INTERRUPT Register
//*******************************//
#define SREG   (*((volatile uint8_t *) (0x5F)))
#define GICR   (*((volatile uint8_t *) (0x5B)))
#define GIFR   (*((volatile uint8_t *) (0x5A)))
#define MCUCR  (*((volatile uint8_t *) (0x55)))
#define MCUCSR (*((volatile uint8_t *) (0x54)))


#endif /* REGISTARS_H_ */