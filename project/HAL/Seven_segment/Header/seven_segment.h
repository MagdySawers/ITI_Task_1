/*
 * seven_segment.h
 *
 * Created: 10/15/2022 10:19:38 PM
 *  Author: Win 10-Pro
 */ 


#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#include "HDIO.h"

/********* Macro definition *********/
#define  common_Anode    0   
#define  common_Cathode  1
#define  mode common_Cathode
/*****************type declaration***************************/
typedef struct{
	u8 port;
	u8 pin;
	}sev_seg_t;
typedef struct{
	sev_seg_t SEVEN_SEGMENT_PINS[4];
	}SEVEN_SEGMENT_Config;	
/**************functions declaration*********************** */
void SEVEN_SEGMENT_init(SEVEN_SEGMENT_Config *Sev_seg);
void SEVEN_SEGMENT_write_value(SEVEN_SEGMENT_Config *Sev_seg,u8 value);

#endif /* SEVEN_SEGMENT_H_ */