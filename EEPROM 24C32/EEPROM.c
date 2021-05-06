/* to send 11 bit address 
first we send the most 3 bit to detect the block we want to access 
1- address & 0x0700 : to determine the value of the most 3 bit 
2- shift (address&0x0700) with 7 in the right 
3- the result is the first part of address
4- the second part we determine it by casting address
*/

#include "EEPROM.h"

unsigned char EEPROM_Write(unsigned char data ,unsigned short address)
{
	TWI_Start();
	
	TWI_Write((EEPROM_DEV_ADDRES|WRITE));
	
	TWI_Write((address & 0x0F00)>>8);
	
	TWI_Write((unsigned char)address);
	
	TWI_Write(data);

	TWI_Stop();
	return SUCCESS;
}

unsigned char EEPROM_Read(unsigned short address)
{
	char data_read=0;
	TWI_Start();

	TWI_Write((EEPROM_DEV_ADDRES|WRITE));
	
	TWI_Write((address & 0x0F00)>>8);
	
	TWI_Write((unsigned char)address);

	TWI_Start();
	
	TWI_Write((EEPROM_DEV_ADDRES|READ));

	data_read = TWI_ReadNACK();

	TWI_Stop();

	return data_read;

}
