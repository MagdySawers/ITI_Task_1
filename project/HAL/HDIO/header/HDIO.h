/*
 * HDIO.h
 *
 * Created: 10/15/2022 5:45:16 PM
 *  Author: moust
 */ 


#ifndef HDIO_H_
#define HDIO_H_

#include "../../../MCAL/DIO/header/DIO_interface.h"

#define PORT_A PORTA
#define PORT_B PORTB
#define PORT_C PORTC
#define PORT_D PORTD

#define DIO_IN  INPUT
#define DIO_OUT OUTPUT
#define DIO_HIGH HIGH
#define DIO_LOW  LOW

#define PIN0  0
#define PIN1  1
#define PIN2  2
#define PIN3  3
#define PIN4  4
#define PIN5  5
#define PIN6  6
#define PIN7  7

void HDIO_SetPinDirection_vid (u8 PORT , u8 PIN , u8 direction);
u8   HDIO_ReadPinValue_u8     (u8 PORT , u8 PIN);
void HDIO_SetPinValue_vid     (u8 PORT , u8 PIN , u8 state);
void HDIO_PinToggle_vid       (u8 PORT , u8 PIN);
void HDIO_PinPullUp_vid       (u8 PORT , u8 PIN);

#endif /* HDIO_H_ */