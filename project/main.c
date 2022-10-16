/*
 * main.c
 *
 *  Created on: Oct 9, 2022
 *      Author: moust
 */


#include <stdio.h>
#include "HDIO.h"
#include "seven_segment.h"

 SEVEN_SEGMENT_Config s1 ={
	 .SEVEN_SEGMENT_PINS[0].port = PORT_A,
	 .SEVEN_SEGMENT_PINS[0].pin  = PIN0,
	 .SEVEN_SEGMENT_PINS[1].port = PORT_A,
	 .SEVEN_SEGMENT_PINS[1].pin  = PIN1,
	 .SEVEN_SEGMENT_PINS[2].port = PORT_A,
	 .SEVEN_SEGMENT_PINS[2].pin  = PIN2,
	 .SEVEN_SEGMENT_PINS[3].port = PORT_A,
	 .SEVEN_SEGMENT_PINS[3].pin  = PIN3,
 };
 
int main ()
{
	 u8 btn_state=0;
	 u8 flag_btn=0;
	 u8 number=0;
	 HDIO_SetPinDirection_vid(PORT_C,PIN0,DIO_IN);
	 SEVEN_SEGMENT_init(&s1);
	
	 while (1)
	    {
		btn_state = HDIO_ReadPinValue_u8 (PORT_C , PIN0);
		if(btn_state==1&&flag_btn==0){
			flag_btn=1;
			number++;
			if(number==10){
				number=0;
			}
		}
		else if(btn_state==0&&flag_btn==1){
			flag_btn=0;
		}
		SEVEN_SEGMENT_write_value(&s1,number);
		}
		
}
