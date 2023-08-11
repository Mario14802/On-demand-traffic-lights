/*
 * app.c
 *
 * Created: 12/12/2022 10:06:12 PM
 *  Author: MARIO
 */ 

#include "app.h"

 //global variable that controls the conditions for each story 
uint8_t LED_case=0;


void app_start(){
	
//GREEN cars traffic lights initialization
LED_INIT(DIO_PORTA,Pin0);
//YELLOW cars traffic lights initialization
LED_INIT(DIO_PORTA,Pin1);
//RED cars traffic lights initialization
LED_INIT(DIO_PORTA,Pin2);

//GREEN pedestrian traffic lights initialization
LED_INIT(DIO_PORTB,Pin0);
//YELLOW pedestrian traffic lights initialization
LED_INIT(DIO_PORTB,Pin1);
//RED pedestrian traffic lights initialization
LED_INIT(DIO_PORTB,Pin2);

//initialization for button
BUTTON_INIT(DIO_PORTD,Pin2); 

//initialization for TIMER
Timer0_INIT ();
//timer prescaler
Timer0_Prescalar();
//general interrupt enable
General_Int_Enable();
//Pin interrupt enable
ExINT_SetUp(INT0_PIN);	


while (1)
   {
	   
	            //GREEN cars traffic lights 
	     	      LED_ON(DIO_PORTA,Pin0);
		          TIMER0_DELAY();
		          LED_OFF(DIO_PORTA,Pin0);
			 
		      //first case if the pedestrian pushed the button when it is green
		        if (LED_case==Green_Yellow_case)
		         {
		 	     LED_case=0;
			     return Normal_case;
		        }
		   
		  
			    //YELLOW cars TRAFFIC  lights
			    LED_ON(DIO_PORTA,Pin1);
			    TIMER0_DELAY();
			    LED_OFF(DIO_PORTA,Pin1); 
				
				//second case if the pedestrian pushed the button when it is yellow
				 if (LED_case==Green_Yellow_case)
				 {
					 LED_case=0;
					 return Normal_case;
				 }
			
		  
	
		         //RED cars TRAFFIC  lights 
		          LED_ON(DIO_PORTA,Pin2);
		          TIMER0_DELAY();
		          LED_OFF(DIO_PORTA,Pin2);
		  
		  	   //THIRD case if the pedestrian pushed the button when it is RED
		  	   if (LED_case==Red_case)
		  	   {
			  	   LED_case=0;
			  	   return Normal_case;
		  	   }
		  
	     
       
	  
			
   }
}



//interrupt service routine 
ISR(INT0_vect){ 
	
 //checking if the is on or green,yellow traffic lights are on or not
    if ((((Get_LED_statue(DIO_PORTA,Pin0))==HIGH)||(((Get_LED_statue(DIO_PORTA,Pin1))==HIGH))))
    {
		 case_GREEN_yellow_Traffic();
	 return  LED_case=Green_Yellow_case;
    }
//checking if the red traffic light is on or not
    if ((Get_LED_statue(DIO_PORTA,Pin2))==HIGH)   
	{
		case_Red_Traffic();
	 return  LED_case=Red_case;

	}

 
     LED_case=0;
}