#include <avr/io.h>
#include "PWM.h"


void PWM_Init()
{
	TCCR2=TCCR2_INIT ;
}

void PWM_SetDutyCycle(char val) 
{
	
	OCR2 = (val*255)/100 ; ;
}