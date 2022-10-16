/*
 * ADC.c
 *
 * Created: 10/16/2022 12:37:43 PM
 *  Author: Win 10-Pro
 */ 
#include "ADC_interface.h"

void ADC_init(void(*interruptHandler)(void)){
	/*****set v_ref******/
	configure_Vref(V_ref);
	/*****set ADC_frq******/
	configure_ADC_F(PreS_f);
	/*****set data format******/
	configure_format(data_format);
	/*****set triggering mode******/
	configure_trig(triggering_mode);
	/*****operation mode********/
	if(ADC_mode==interrupt_m){
		/******enable interrupt*****/
		ADC_Clearflag();
		ADC_InterruptEnable();
		ADC_interruptHandler=interruptHandler;
	}
	else{
		ADC_InterruptDisable();
		interruptHandler=0;
	}
	/*******Enable ADC prepheral*********/
	ADC_enable();
	/*********num_of_channels to be analog inputs*****************/
	switch(num_channels){
		case 7: HDIO_SetPinDirection_vid(PORT_A , PIN7 , DIO_IN);
		case 6: HDIO_SetPinDirection_vid(PORT_A , PIN6 , DIO_IN);
		case 5: HDIO_SetPinDirection_vid(PORT_A , PIN5 , DIO_IN);
		case 4: HDIO_SetPinDirection_vid(PORT_A , PIN4 , DIO_IN);
		case 3: HDIO_SetPinDirection_vid(PORT_A , PIN3 , DIO_IN);
		case 2: HDIO_SetPinDirection_vid(PORT_A , PIN2 , DIO_IN);
		case 1: HDIO_SetPinDirection_vid(PORT_A , PIN1 , DIO_IN);
		case 0: HDIO_SetPinDirection_vid(PORT_A , PIN0 , DIO_IN);
		default: HDIO_SetPinDirection_vid(PORT_A , PIN0 , DIO_IN);
	}
}
void start_conversion(){
	start_conversion_op();
}
u16 ADC_readValue(){
  u16 data = ADCL_reg ;
  data |= (u16)(ADCH_reg<<8);
  return data;	
}
void ADC_select_channels(channel_select channel){
	sel_channels(channel);
}
ISR(ADC_vect){
	if(ADC_interruptHandler!=0){
		ADC_interruptHandler();
	}
}