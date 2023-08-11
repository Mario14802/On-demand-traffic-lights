/*
 * app.h
 *
 * Created: 12/12/2022 10:06:23 PM
 *  Author: MARIO
 */ 


#ifndef APP_H_
#define APP_H_

#include "../HAL/LED/led.h"
#include "../HAL/BUTTON/button.h"

#include <avr/io.h>
#include <avr/interrupt.h>



#define Normal_case 1
#define Green_Yellow_case 1
#define Red_case 2

void app_start(void);

#endif /* APP_H_ */