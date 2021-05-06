#ifndef GPT_H_
#define GPT_H_
#define TFCPU 8000UL
#define GPT_PRESCLER 1024UL 
////////////////prototyping/////////////////
int long GPT_GetTime() ;
void GPT_Init(void) ;
void GPT_ClrTIMER(void);
///////////////// configuration////////////////
#define TCCR0_INIT 0b00000101
#define TIMSK_INIT 0b00000001
#define TCNT0_INIT 0b00000000




#endif /* GPT_H_ */
