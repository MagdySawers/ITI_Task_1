/*
 * DIO.c
 *
 *  Created on: Oct 8, 2022
 *      Author: moust
 */
#include "../header/DIO.h"

void DIO_SetPinDirection (pin* mypin)
{
	if (mypin->direction == INPUT)
	{
		switch(mypin->port)
		{
		case PORTA:
			CLR_BIT(DDRA, mypin->pin);
			break;
		case PORTB:
			CLR_BIT(DDRB, mypin->pin);
			break;
		case PORTC:
			CLR_BIT(DDRC, mypin->pin);
			break;
		case PORTD:
			CLR_BIT(DDRD, mypin->pin);
			break;
		default :
			mypin->error = FAILED;
			break;
		}
	}
	else if(mypin->direction == OUTPUT)
	{
		switch(mypin->port)
			{
			case PORTA:
				SET_BIT(DDRA, mypin->pin);
				break;
			case PORTB:
				SET_BIT(DDRB, mypin->pin);
				break;
			case PORTC:
				SET_BIT(DDRC, mypin->pin);
				break;
			case PORTD:
				SET_BIT(DDRD, mypin->pin);
				break;
			default :
				mypin->error = FAILED;
				break;
			}
	}
	else
	{
		mypin->error = FAILED;
	}
}
void DIO_GetPinValue (pin* mypin,u8* value)
{
	switch(mypin->port)
			{
			case PORTA:
				*value = READ_BIT(PINA, mypin->pin);
				break;
			case PORTB:
				*value = READ_BIT(PINB, mypin->pin);
				break;
			case PORTC:
				*value = READ_BIT(PINC, mypin->pin);
				break;
			case PORTD:
				*value = READ_BIT(PIND, mypin->pin);
				break;
			default :
				mypin->error = FAILED;
				break;
			}
}
void DIO_SetPinValue (pin* mypin,u8 value)
{
	if (value == HIGH)
	{
		switch(mypin->port)
		{
		case PORTA:
			SET_BIT(PORTA, mypin->pin);
			break;
		case PORTB:
			SET_BIT(PORTB, mypin->pin);
			break;
		case PORTC:
			SET_BIT(PORTC, mypin->pin);
			break;
		case PORTD:
			SET_BIT(PORTD, mypin->pin);
			break;
		default :
			mypin->error = FAILED;
			break;
		}
	}
	else if(value == LOW)
	{
		switch(mypin->port)
		{
		case PORTA:
			CLR_BIT(PORTA, mypin->pin);
			break;
		case PORTB:
			CLR_BIT(PORTB, mypin->pin);
			break;
		case PORTC:
			CLR_BIT(PORTC, mypin->pin);
			break;
		case PORTD:
			CLR_BIT(PORTD, mypin->pin);
			break;
		default :
			mypin->error = FAILED;
			break;
		}
	}
	else
	{
		mypin->error = FAILED;
	}
}
//void DIO_PinToggle (pin* mypin);
//void DIO_PinPullUp (pin* mypin);
