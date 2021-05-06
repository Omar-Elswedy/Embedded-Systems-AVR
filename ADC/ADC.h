#ifndef ADC_H_
#define ADC_H_


////////////////prototyping/////////////////
void ADC_Init(void);
void ADC_Convert(char channel_num ,int *ptr);


///////////////// configuration////////////////
#define  ADC_ADMUX_INITVAL 0b01000000
#define  ADC_ADCSR_INITVAL 0b10000111


#endif /* ADC_H_ */
