/*
 * DIO.c
 *
 *  Created on: Oct 8, 2022
 *      Author: moust
 */
#include "../header/DIO.h"

void DIO_SetPinDirection (DIO_cfg * DioConfig)
{
	PORTx * PORT_t = (PORTx *)(DioConfig->port);

	if (DioConfig->direction == INPUT)
	{
		CLR_BIT(&(PORT_t->DDR), DioConfig->pin);
	}
	else if(DioConfig->direction == OUTPUT)
	{
		SET_BIT(&(PORT_t->DDR), DioConfig->pin);
	}
	else
	{
		DioConfig->error = FAILED;
	}
}
void DIO_GetPinValue (DIO_cfg * DioConfig)
{
	PORTx * PORT_t = (PORTx *)(DioConfig->port);
	DioConfig->state = READ_BIT(&(PORT_t->PIN), DioConfig->pin);
}

void DIO_SetPinValue (DIO_cfg * DioConfig)
{
	PORTx * PORT_t = (PORTx *)(DioConfig->port);
	if (DioConfig->state == HIGH)
	{
		SET_BIT(&(PORT_t->PORT), DioConfig->pin);
	}
	else if(DioConfig->state == LOW)
	{
		CLR_BIT(&(PORT_t->PORT), DioConfig->pin);
	}
	else
	{
		DioConfig->error = FAILED;
	}
}
//void DIO_PinToggle (pin* mypin);
//void DIO_PinPullUp (pin* mypin);
