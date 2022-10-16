/*
 * seven_segment.c
 *
 * Created: 10/15/2022 10:20:25 PM
 *  Author: Win 10-Pro
 */ 

#include "seven_segment.h"

#if mode == common_Cathode
void SEVEN_SEGMENT_init(SEVEN_SEGMENT_Config *Sev_seg){
	for(int i=0;i<4;i++){
		HDIO_SetPinDirection_vid (Sev_seg->SEVEN_SEGMENT_PINS[i].port,  
		                          Sev_seg->SEVEN_SEGMENT_PINS[i].pin,DIO_OUT);
	}
}
void SEVEN_SEGMENT_write_value(SEVEN_SEGMENT_Config *Sev_seg,u8 value){
	for (int i=0;i<4;i++){
	  HDIO_SetPinValue_vid (Sev_seg->SEVEN_SEGMENT_PINS[i].port,
	                        Sev_seg->SEVEN_SEGMENT_PINS[i].pin,
						    ((value>>i)&0x01));
	}
}

#elif mode == common_Anode
void SEVEN_SEGMENT_init(SEVEN_SEGMENT_Config *Sev_seg){
	for(int i=0;i<4;i++){
		HDIO_SetPinDirection_vid (Sev_seg->SEVEN_SEGMENT_PINS[i].port,
		Sev_seg->SEVEN_SEGMENT_PINS[i].pin,DIO_OUT);
	}
}
void SEVEN_SEGMENT_write_value(SEVEN_SEGMENT_Config *Sev_seg,u8 value){
	for (int i=0;i<4;i++){
		HDIO_SetPinValue_vid (Sev_seg->SEVEN_SEGMENT_PINS[i].port,
		Sev_seg->SEVEN_SEGMENT_PINS[i].pin,
		((value>>i)&0x01));
	}
}

#endif