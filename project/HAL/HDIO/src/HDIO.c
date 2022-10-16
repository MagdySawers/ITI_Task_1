/*
 * HDIO.c
 *
 * Created: 10/15/2022 5:52:40 PM
 *  Author: moust
 */ 
#include "../header/HDIO.h"
void HDIO_SetPinDirection_vid (u8 PORT , u8 PIN , u8 direction)
{
	DIO_cfg cfg = {PORT , PIN , direction};
	DIO_SetPinDirection(&cfg);
}
u8   HDIO_ReadPinValue_u8(u8 PORT , u8 PIN)
{
	DIO_cfg cfg = {PORT , PIN};
	return DIO_ReadPinValue(&cfg);
}
void HDIO_SetPinValue_vid(u8 PORT , u8 PIN , u8 state)
{
	DIO_cfg cfg = {PORT , PIN};
	DIO_SetPinValue(&cfg , state);
}
void HDIO_PinToggle_vid       (u8 PORT , u8 PIN)
{
	DIO_cfg cfg = {PORT , PIN};
	DIO_PinToggle(&cfg);
}
void HDIO_PinPullUp_vid       (u8 PORT , u8 PIN)
{
	DIO_cfg cfg = {PORT , PIN};
	DIO_PinPullUp(&cfg);
}
