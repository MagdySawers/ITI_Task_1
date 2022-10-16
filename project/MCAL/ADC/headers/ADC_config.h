/*
 * ADC_config.h
 *
 * Created: 10/16/2022 12:36:44 PM
 *  Author: Win 10-Pro
 */ 


#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/***********SELECT MaX VOLTAGE*************/
#define AREF 0
#define AVCC 1
#define Internal_V 3

/*********SELECT PRESCALER FREQUENCY*********/
#define Fsys_ovr_2    0
#define Fsys_ovr_4    2
#define Fsys_ovr_8    3
#define Fsys_ovr_16   4
#define Fsys_ovr_32   5
#define Fsys_ovr_64   6
#define Fsys_ovr_128  7

/*********SELECT DATA FORMAT******************/
#define right_adjusted 0
#define left_adjusted  1

/*********SELECT_TRIGGRING_MODE**************/
#define Free_Running_mode           0
#define Analog_Comparator           1
#define External_Interrupt_Request0 2
#define Timer0_CTC                  3
#define Timer0_OVR                  4
#define Timer1_CTC_B                5
#define Timer1_OVR                  6
#define Timer1_Capture_event        7
/************operation mode******************/
#define interrupt_m   0
#define polling_m     1
/********************USER_DEFINED***********************/
#define V_ref            AVCC
#define PreS_f           Fsys_ovr_32
#define data_format      right_adjusted
#define triggering_mode  Free_Running_mode
#define ADC_mode         interrupt_m
#define num_channels     1
#endif /* ADC_CONFIG_H_ */