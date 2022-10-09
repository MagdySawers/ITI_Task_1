/*
 * DIO_interface.h
 *
 *  Created on: Oct 8, 2022
 *      Author: moust
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "../../../utilities/registers/REG.h"
#include "../../../utilities/Bit math/BitMath.h"
#include "../../../utilities/std types/std_types.h"

#define INPUT  0
#define OUTPUT 1
#define HIGH   1
#define LOW    0


typedef enum
{
	NO_ERR , FAILED
}ERR_DIO;

typedef struct
{
	u8 port;
	u8 pin;
	u8 direction;
	u8 error;
}pin;



void DIO_SetPinDirection (pin* mypin);
void DIO_GetPinValue (pin* mypin,u8* value);
void DIO_SetPinValue (pin* mypin,u8 value);
void DIO_PinToggle (pin* mypin);
void DIO_PinPullUp (pin* mypin);


#endif /* DIO_INTERFACE_H_ */
