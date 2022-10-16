/*
 * ADC_interface.h
 *
 * Created: 10/16/2022 12:37:08 PM
 *  Author: Win 10-Pro
 */ 


#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

/***************includes********************/
#include "ADC_config.h"
#include "BitMath.h"
#include "std_types.h"
#include "HDIO.h"
#include "ADC_registers.h"
#include <avr/interrupt.h>

/******************type definitions***************************/
typedef enum{
	channel_0,
	channel_1,
	channel_2,
	channel_4,
	channel_5,
	channel_6,
	channel_7,
}channel_select;
/*****************MACROS function ****************************/
#define configure_Vref(x)      (ADMUX_reg|=((x)<<6))
#define configure_ADC_F(x)     (ADCSRA_reg|=((x)<<0))
#define configure_format(x)    (ADMUX_reg|=((x)<<5))
#define configure_trig(x)      (ADCSRA_reg|=((x)<<5))
#define ADC_enable()           (ADCSRA_reg|=(1<<7))
#define ADC_disable()          (ADCSRA_reg&=~(1<<7))
#define ADC_Clearflag()        (ADCSRA_reg|=(1<<4))
#define ADC_InterruptEnable()  (ADCSRA_reg|=(1<<3))
#define ADC_InterruptDisable() (ADCSRA_reg&=~(1<<3))
#define start_conversion_op()  (ADCSRA_reg|=(1<<6)) 
#define sel_channels(x)        (ADMUX_reg|=(x))
/****************APIs functions******************************/
void(*ADC_interruptHandler)(void);
void ADC_init(void(*interruptHandler)(void));
void start_conversion();
u16 ADC_readValue();
void ADC_select_channels(channel_select channel);
#endif /* ADC_INTERFACE_H_ */