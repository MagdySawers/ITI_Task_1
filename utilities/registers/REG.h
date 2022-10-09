/*
 * DIO_REG.h
 *
 *  Created on: Oct 8, 2022
 *      Author: moust
 */

#ifndef DIO_REG_H_
#define DIO_REG_H_

#include "../Bit math/BitMath.h"

typedef struct
{
	u8 PIN;
	u8 DDR;
	u8 PORT;
}PORTx;

#define PORTA   0x39
#define PORTB   0x36
#define PORTC   0x33
#define PORTD   0x30


#endif /* DIO_REG_H_ */
