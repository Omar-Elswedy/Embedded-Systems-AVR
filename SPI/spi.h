#ifndef SPI_H_
#define SPI_H_
/*********************Prototypes***********************/
void SPI_Init(void);
void SPI_Transmit(char Copy_u8TransVal);
void SPI_Receive(char *Copy_u8ReceiveVal);


/*********************Configurations***********************/
#define SPI_u8SPCR_INIT   0b01110111
#define SPI_u8SPSR_INIT   0b00000001




#endif /* SPI_H_ */
