#ifndef EEPROM_H_
#define EEPROM_H_

#include "I2C.h"

#define ERROR  		0
#define SUCCESS   	1


#define WRITE 								(0U)
#define READ								(1U)

#define EEPROM_DEV_ADDRES					(0xA0)


unsigned char EEPROM_Read(unsigned short address);
unsigned char EEPROM_Write(unsigned char data ,unsigned short address);


#endif  //EEPROM_H_