/*
 * main.c
 *
 *  Created on: Oct 9, 2022
 *      Author: moust
 */


#include <stdio.h>
#include "MCAL/DIO/header/DIO.h"

volatile int x = 1;

int main ()
{
	DIO_cfg MyPin = {PORTD,7,OUTPUT,HIGH};
		DIO_SetPinDirection(&MyPin);
		DIO_SetPinValue(&MyPin);
	    while (x)
	    {
			;
	    }
}
