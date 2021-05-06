#define F_CPU 8000000UL 
#include <util/delay.h>
#include <avr/interrupt.h>
#include "EXT_INT.h"
void (*p)(void) ;


void EXT_SetINT0(void (*ptr0)(void))
{
	p=ptr0 ;
	
}

void EXT_Init()
{
MCUCR|= MCUCR_INIT ;  
MCUCSR|=MCUCSR_INIT  ;
GICR|=GICR_INIT   ;
}

ISR(INT0_vect)
{
	
	p();

	
}