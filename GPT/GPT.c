#include <avr/io.h>
#include <avr/interrupt.h>
#include "GPT.h"
int  OverflowCount=0;
int long GPT_GetTime()
{
	int Cycles;
	int long Time;
	Cycles=256*OverflowCount +(int)TCNT0;
    Time = ((long)Cycles  * 1000UL)/TFCPU;
    return Time;
	
}
void GPT_Init(void)
{
	TCCR0=TCCR0_INIT;
	TIMSK=TIMSK_INIT;
	TCNT0=TCNT0_INIT;
}
void GPT_ClrTIMER(void)
{
	TCNT0=TCNT0_INIT;
	OverflowCount=0;
}

ISR(TIMER0_OVF_vect)
{
	OverflowCount++;
}