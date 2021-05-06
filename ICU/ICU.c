#include <avr/io.h>
#include <avr/interrupt.h>
#include "ICU.h"

unsigned short Current=0;
void ICU_Init()
{
	
	TCCR1A=TCCR1A_INIT ;
    TCCR1B=TCCR1B_INIT  ;
	TIMSK|=TIMSK_INIT ;
}

unsigned short ICU_GetCurrent()
{
	return Current;
}

ISR(TIMER1_CAPT_vect)
{
	
	Current= (unsigned short) ICR1L ;
	Current|=(unsigned short)(ICR1H<<8);
	
}