#ifndef I2C_H_
#define I2C_H_

#include <avr/io.h>



/*
//I2C status
#define RESTART_STATUS     					(0x10)
#define START_STATUS	   					(0x08)
#define SLAVE_ADDRESS_WRITE_ACK_STATUS		(0x18)
#define SLAVE_ADDRESS_READ_ACK_STATUS		(0x40)
#define DATA_SEND_ACK_STATUS				(0x28)
#define DATA_READ_NACK_STATUS				(0x58)
#define DATA_READ_ACK_STATUS				(0x50)
*/

void TWI_init();
void TWI_Start();
void TWI_Stop();
//unsigned char TWI_GetStatus();
void TWI_Write(unsigned char u8data);
unsigned char TWI_ReadNACK();






#endif    //I2C_H_
