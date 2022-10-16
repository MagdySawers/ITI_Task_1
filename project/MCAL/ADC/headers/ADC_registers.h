/*
 * ADC_registers.h
 *
 * Created: 10/16/2022 4:48:10 PM
 *  Author: Win 10-Pro
 */ 


#ifndef ADC_REGISTERS_H_
#define ADC_REGISTERS_H_

#define ADMUX_reg    (*((volatile u8*)0x27))
#define ADCSRA_reg   (*((volatile u8*)0x26))
#define ADCH_reg         (*((volatile u8*)0x25))
#define ADCL_reg         (*((volatile u8*)0x24))


#endif /* ADC_REGISTERS_H_ */