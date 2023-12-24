 /******************************************************************************
 *
 * Module: DIO
 *
 * File Name: DIO.c
 *
 * Description: Source file for the ATmega32 DIO driver
 *
 * Author: Momen Elsayed Shaban
 *
 *******************************************************************************/
#include "DIO.h"
#include "DIO_Private.h"


/*
 * Description :
 * Write the value Logic High or Logic Low on the required pin.
 * If the input port number or pin number are not correct, The function will not handle the request and return an Error.
 * If the pin is input, this function will enable/disable the internal pull-up resistor.
 */

DIO_enumError_t DIO_enumSetPin(u8 Copy_enumPortNum,u8 Copy_enumPinNum,u8 Copy_enumLogicState)
{
	volatile u8* loc_DioConfigPtr = NULL;
	DIO_enumError_t loc_DioError = DIO_enumOK;
	if (Copy_enumPortNum > NUM_OF_PORTS)										/*Check the entered port number*/
	{
		loc_DioError = DIO_enumInvalidPort;
	}
	else if (Copy_enumPinNum > NUM_OF_PINS_PER_PORT)							/*Check the entered pin number*/
	{
		loc_DioError = DIO_enumInvalidPin;
	}
	else 
	{
		switch(Copy_enumPortNum)
		{
			case DIO_enumPORTA: loc_DioConfigPtr = (volatile u8*)(&PORTA);
			break;
			case DIO_enumPORTB: loc_DioConfigPtr = (volatile u8*)(&PORTB);
			break;
			case DIO_enumPORTC: loc_DioConfigPtr = (volatile u8*)(&PORTC);
			break;
			case DIO_enumPORTD: loc_DioConfigPtr = (volatile u8*)(&PORTD);
			break;
			default:
			loc_DioError = DIO_enumInvalidPort;
			break;
	    }
		if (Copy_enumLogicState == DIO_enumLogicHigh)
		{
			SET_BIT(*(volatile u8*)loc_DioConfigPtr,Copy_enumPinNum);
		}
		else
		{
			CLEAR_BIT(*(volatile u8*)loc_DioConfigPtr,Copy_enumPinNum);
		}
	}
	 return loc_DioError;
}

/*
 * Description :
 * Write the value on the required port.
 * If any pin in the port is output pin the value will be written.
 * If any pin in the port is input pin this will activate/deactivate the internal pull-up resistor.
 * If the input port number is not correct, The function will not handle the request and return an Error.
 */
DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,u8 Copy_value)
{
	if (Copy_enumPortNum > NUM_OF_PORTS)										/*Check the entered port number*/
	{
		return DIO_enumInvalidPort;
	}
	else
	{
		switch(Copy_enumPortNum)
		{
			/****************PORTA Configurations****************************************/
			case DIO_enumPORTA:
			PORTA = Copy_value;
			break;
			/****************PORTB Configurations****************************************/
			case DIO_enumPORTB:
			PORTB = Copy_value;
			break;
			/****************PORTC Configurations****************************************/
			case DIO_enumPORTC:
			PORTC = Copy_value;
			break;
			/****************PORTD Configurations****************************************/
			case DIO_enumPORTD:
			PORTD = Copy_value;
			break;
			
			default:
			/* Do Nothing */
			break;
		}
	}
	return DIO_enumOK;
}	

/*
 * Description :
 * Read the value of the required Pin from its location an put it in the third parameter of the function Add_Pu8PinValue
 * If the input port number or pin number are not correct, The function will return an Error.
 */
DIO_enumError_t DIO_enumReadState(u8 Copy_enumPortNum,u8 Copy_enumPinNum,u8* Add_Pu8PinValue)
{
	if (Copy_enumPortNum > NUM_OF_PORTS)										/*Check the entered port number*/
	{
		return DIO_enumInvalidPort;
	}
	else if (Copy_enumPinNum > NUM_OF_PINS_PER_PORT)							/*Check the entered pin number*/
	{
		return DIO_enumInvalidPin;
	}
	else
	{
		switch(Copy_enumPortNum)
		{
			case DIO_enumPORTA:
			*Add_Pu8PinValue = GET_BIT(PINA,Copy_enumPinNum);		
			break;
			
			case DIO_enumPORTB:
			*Add_Pu8PinValue = GET_BIT(PINB,Copy_enumPinNum);
			break;

			case DIO_enumPORTC:
			*Add_Pu8PinValue = GET_BIT(PINC,Copy_enumPinNum);
			break;

			case DIO_enumPORTD:
			*Add_Pu8PinValue = GET_BIT(PIND,Copy_enumPinNum);
			break;
			
			default:
			/* Do Nothing */
			break;
		}
	}
	
	if (Add_Pu8PinValue == NULL_PTR)
	{
		return DIO_enumNullPointer;
	}
	else
	{
		return DIO_enumOK;
	}
}

/*
 * Description :
 * This Function Provide a delay in millieseconds
 * You shall define the F_CPU before using it or it will be a default value of 1Mhz
 */
void DIO_DelayMs(u32 Copy_u32TimeMs)
{
	/* Calculate the number of cycles needed for the delay */ /*8000UL represent number of cycles per second*/
    u32 cycles = (F_CPU / 11111UL) * Copy_u32TimeMs;
    for (u32 i = 0; i < cycles; i++) {
		  asm volatile("nop");
    }

}
