#include "SEG.h"
#ifdef BCD_DECODER
void SEG_Write(char val)
{
	switch(val)
	{
		case 0:
		DIO_WritePinVal(PINSEG_A,OFF);
		DIO_WritePinVal(PINSEG_B,OFF);
		DIO_WritePinVal(PINSEG_C,OFF);
		DIO_WritePinVal(PINSEG_D,OFF);
		break;
		
		case 1:
		DIO_WritePinVal(PINSEG_A,ON);
		DIO_WritePinVal(PINSEG_B,OFF);
		DIO_WritePinVal(PINSEG_C,OFF);
		DIO_WritePinVal(PINSEG_D,OFF);
		break;
		
		case 2:
		DIO_WritePinVal(PINSEG_A,OFF);
		DIO_WritePinVal(PINSEG_B,ON);
		DIO_WritePinVal(PINSEG_C,OFF);
		DIO_WritePinVal(PINSEG_D,OFF);
		break;
		
		case 3:
		DIO_WritePinVal(PINSEG_A,ON);
		DIO_WritePinVal(PINSEG_B,ON);
		DIO_WritePinVal(PINSEG_C,OFF);
		DIO_WritePinVal(PINSEG_D,OFF);
		break;
		
		case 4:
		DIO_WritePinVal(PINSEG_A,OFF);
		DIO_WritePinVal(PINSEG_B,OFF);
		DIO_WritePinVal(PINSEG_C,ON);
		DIO_WritePinVal(PINSEG_D,OFF);
		break;
		
		case 5:
		DIO_WritePinVal(PINSEG_A,ON);
		DIO_WritePinVal(PINSEG_B,OFF);
		DIO_WritePinVal(PINSEG_C,ON);
		DIO_WritePinVal(PINSEG_D,OFF);
		break;
		
		case 6:
		DIO_WritePinVal(PINSEG_A,OFF);
		DIO_WritePinVal(PINSEG_B,ON);
		DIO_WritePinVal(PINSEG_C,ON);
		DIO_WritePinVal(PINSEG_D,OFF);
		break;
		
		case 7:
		DIO_WritePinVal(PINSEG_A,ON);
		DIO_WritePinVal(PINSEG_B,ON);
		DIO_WritePinVal(PINSEG_C,ON);
		DIO_WritePinVal(PINSEG_D,OFF);
		break;
		
		case 8:
		DIO_WritePinVal(PINSEG_A,OFF);
		DIO_WritePinVal(PINSEG_B,OFF);
		DIO_WritePinVal(PINSEG_C,OFF);
		DIO_WritePinVal(PINSEG_D,ON);
		break;
		
		case 9:
		DIO_WritePinVal(PINSEG_A,ON);
		DIO_WritePinVal(PINSEG_B,OFF);
		DIO_WritePinVal(PINSEG_C,OFF);
		DIO_WritePinVal(PINSEG_D,ON);
		break;
		
		default:
		break;
		
	}
	
}
#else
void SEG_Write(char val)
{
	switch (val)
	{
		case 0:
		DIO_WritePortVal(SEG_PORT,ZERO);
		break;
		
		case 1:
		DIO_WritePortVal(SEG_PORT,ONE);
		break;
		
		case 2:
		DIO_WritePortVal(SEG_PORT,TWO);
		break;
		
		case 3:
		DIO_WritePortVal(SEG_PORT,THREE);
		break;
		
		case 4:
		DIO_WritePortVal(SEG_PORT,FOUR);
		break;
		
		case 5:
		DIO_WritePortVal(SEG_PORT,FIVE);
		break;
		
		case 6:
		DIO_WritePortVal(SEG_PORT,SIX);
		break;
		
		case 7:
		DIO_WritePortVal(SEG_PORT,SEVEN);
		break;
		
		case 8:
		DIO_WritePortVal(SEG_PORT,EIGHT);
		break;
		
		case 9:
		DIO_WritePortVal(SEG_PORT,NINE);
		break;
		
		default:
		break;
		
		
	}
}
#endif


void SEG1_Display(char val)
{
	if(val == 1)
	{
		DIO_WritePinVal(SEG1_EN,ENABLE);
	}
	else 
	{
		DIO_WritePinVal(SEG1_EN,DISABLE);
	}
}

void SEG2_Display(char val)
{
	if(val == 1)
	{
		DIO_WritePinVal(SEG2_EN,ENABLE);
	}
	else
	{
		DIO_WritePinVal(SEG2_EN,DISABLE);
	}
}

void SEG_DisplayDP(char val)
{
	if(val == 1)
	{
		DIO_WritePinVal(SEG_DP_PIN,1);
	}
	else
	{
		DIO_WritePinVal(SEG_DP_PIN,0);
	}
}
void SEG_Init(void)
{
	SEG1_Display(0);
	SEG2_Display(0);
	SEG_Write(0);
	SEG_DisplayDP(0);
}