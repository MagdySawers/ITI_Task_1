/*
 * main.c
 *
 *  Created on: Oct 9, 2022
 *      Author: moust
 */


#include <stdio.h>
#include <stdlib.h>

#define F_CPU 16000000UL

#include  <avr/delay.h>
#include "../MCAL/DIO/header/DIO.h"



int main ()
{

    	pin pin1 = {PORTC,7,OUTPUT};

	    DIO_SetPinDirection(&pin1);



	    while (1)
	    {

	   DIO_SetPinValue(&pin1,HIGH);
	    	_delay_ms(1000);


	 	DIO_SetPinValue(&pin1,LOW);
	    _delay_ms(1000);


	    }
}
