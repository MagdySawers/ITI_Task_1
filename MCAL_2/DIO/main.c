#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"

#include <util/delay.h>

void main(){

	// SET PortC Direction as output and initialize it's value with 0xff
	DIO_SetPortDirection (DIO_u8PORTD,DIO_u8PORT_OUTPUT);
	u8 Arr_DecToSeg[11] = {0b00111111,   /* 0 */
			0b00000110,   /* 1 */
			0b01011011,   /* 2 */
			0b01001111,   /* 3 */
			0b01100110,   /* 4 */
			0b01101101,   /* 5 */
			0b01111101,   /* 6 */
			0b00000111,   /* 7 */
			0b01111111,   /* 8 */
			0b01101111,   /* 9 */
			0b10000000    /*.*/  };

	while(1){
		for(u8 i=0;i<11;i++){
			DIO_SetPortValue(DIO_u8PORTD,Arr_DecToSeg[i]);
			_delay_ms(1000);
		}

	}
}

