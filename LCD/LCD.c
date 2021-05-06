#include "LCD.h"
#define F_CPU 8000000UL
#include <util/delay.h>
#include "DIO.h"
#include "common.h"
#define DIO_u8HIGH 1 
#define DIO_u8LOW  0

void LCD_WriteData(unsigned char data ){

	DIO_WritePinVal(LCD_RSPin, DIO_u8HIGH);
	DIO_WritePinVal(LCD_RWPin, DIO_u8LOW);

	DIO_WritePinVal(LCD_d7Pin,GET_BIT(data,7));
	DIO_WritePinVal(LCD_d6Pin,GET_BIT(data,6));
	DIO_WritePinVal(LCD_d5Pin,GET_BIT(data,5));
	DIO_WritePinVal(LCD_d4Pin,GET_BIT(data,4));
	
	DIO_WritePinVal(LCD_ENPin, DIO_u8HIGH);
	_delay_us(5);
	DIO_WritePinVal(LCD_ENPin, DIO_u8LOW);

	
	DIO_WritePinVal(LCD_d7Pin,GET_BIT(data,3));
	DIO_WritePinVal(LCD_d6Pin,GET_BIT(data,2));
	DIO_WritePinVal(LCD_d5Pin,GET_BIT(data,1));
	DIO_WritePinVal(LCD_d4Pin,GET_BIT(data,0));
	
	DIO_WritePinVal(LCD_ENPin, DIO_u8HIGH);
	_delay_us(5);
	DIO_WritePinVal(LCD_ENPin, DIO_u8LOW);
	_delay_us(100);
}
void LCD_WriteCommand(unsigned char command ){

	DIO_WritePinVal(LCD_RSPin, DIO_u8LOW);
	DIO_WritePinVal(LCD_RWPin, DIO_u8LOW);

	DIO_WritePinVal(LCD_d7Pin,GET_BIT(command,7));
	DIO_WritePinVal(LCD_d6Pin,GET_BIT(command,6));
	DIO_WritePinVal(LCD_d5Pin,GET_BIT(command,5));
	DIO_WritePinVal(LCD_d4Pin,GET_BIT(command,4));

	DIO_WritePinVal(LCD_ENPin, DIO_u8HIGH);
	_delay_us(5);
	DIO_WritePinVal(LCD_ENPin, DIO_u8LOW);

	DIO_WritePinVal(LCD_d7Pin,GET_BIT(command,3));
	DIO_WritePinVal(LCD_d6Pin,GET_BIT(command,2));
	DIO_WritePinVal(LCD_d5Pin,GET_BIT(command,1));
	DIO_WritePinVal(LCD_d4Pin,GET_BIT(command,0));

	DIO_WritePinVal(LCD_ENPin, DIO_u8HIGH);
	_delay_us(5);
	DIO_WritePinVal(LCD_ENPin, DIO_u8LOW);
	_delay_us(100);
}

void LCD_init(){

	
	LCD_WriteCommand(0x32);
	LCD_WriteCommand(0x28); // 4-bit mode - 2 line - 5x7 font.
	LCD_WriteCommand(0x0C); // Display no cursor - no blink.
	LCD_WriteCommand(0x06);// Automatic Increment - No Display shift.
	LCD_WriteCommand(0x01); // Clear LCD
	_delay_ms(10);
}
