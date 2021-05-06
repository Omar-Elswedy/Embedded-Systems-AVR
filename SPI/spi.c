#include <avr/io.h>
#include "common.h"
#include "spi.h"
void SPI_Init(void)
{
	SPCR =SPI_u8SPCR_INIT ;
	SPSR|=SPI_u8SPSR_INIT ;

}
void SPI_Transmit(char Copy_u8TransVal)
{
	SPDR = Copy_u8TransVal ;
	while(!GET_BIT(SPSR,SPIF));

}
void SPI_Receive(char *Copy_u8ReceiveVal)
{

	while(!GET_BIT(SPSR,SPIF));
	*Copy_u8ReceiveVal = SPDR;

}
