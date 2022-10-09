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

	pin pin1 = {PORTA,2,OUTPUT};
	    DIO_SetPinDirection(&pin1);
		DIO_SetPinValue(&pin1,HIGH);
	    while (x)
	    {
			;
	    }
}
