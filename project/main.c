/*
 * main.c
 *
 *  Created on: Oct 9, 2022
 *      Author: moust
 */


#include <stdio.h>

#include "HDIO.h"
u8 x;
int main ()
{
	HDIO_SetPinDirection_vid (D,5,IN);
	DIO_cfg pin = {PORTD , 5};
	    while (1)
	    {
			//x = DIO_ReadPinValue(&pin);
			x = HDIO_ReadPinValue_u8(D,5);
	    }
}
