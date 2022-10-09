/*
 * main.c
 *
 *  Created on: Oct 9, 2022
 *      Author: moust
 */


#include <stdio.h>
#include <stdlib.h>
#include <avr/delay.h>
#include "MCAL/DIO/header/DIO.h"

volatile int x = 1;

int main ()
{

    	pin pin1 = {PORTD,3,OUTPUT};

	    DIO_SetPinDirection(&pin1);



	    while (x)
	    {
	    	DIO_SetPinValue(&pin1,HIGH);
	    	_delay_ms(1000);
	    	DIO_GetPinValue(&pin1,LOW);
	    	_delay_ms(1000);
	    }
}
