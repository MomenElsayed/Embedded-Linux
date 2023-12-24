 /******************************************************************************
 *
 * Module: DIO
 *
 * File Name: DIO.h
 *
 * Description: Header file for the ATmega32 DIO driver
 *
 * Author: Momen Elsayed Shaban
 *
 *******************************************************************************/

#ifndef DIO_H_
#define DIO_H_
#include "std_types.h"
#include "bitmath.h"
#include "PORT_Cfg.h"

#ifndef F_CPU
#define F_CPU 1000000UL  /* Default to 1 MHz */
#endif
/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/
typedef enum{
	DIO_enumPORTA,
	DIO_enumPORTB,
	DIO_enumPORTC,
	DIO_enumPORTD
}DIO_enumPorts_t;

typedef enum{
	DIO_enumOK,
	DIO_enumInvalidPort,
	DIO_enumInvalidPin,
	DIO_enumInvalidConfig,
	DIO_enumNullPointer,
	DIO_enumNOK
}DIO_enumError_t;

typedef enum{
	DIO_enumPin0,
	DIO_enumPin1,
	DIO_enumPin2,
	DIO_enumPin3,
	DIO_enumPin4,
	DIO_enumPin5,
	DIO_enumPin6,
	DIO_enumPin7
}DIO_enumPins_t;

typedef enum
{
	DIO_enumLogicLow,
	DIO_enumLogicHigh
}DIO_enumLogicState_t;


/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/

/*
 * Description :
 * Write the value Logic High or Logic Low on the required pin.
 * If the input port number or pin number are not correct, The function will not handle the request and return an Error.
 * If the pin is input, this function will enable/disable the internal pull-up resistor.
 */
DIO_enumError_t DIO_enumSetPin(u8 Copy_enumPortNum,u8 Copy_enumPinNum,u8 Copy_enumLogicState);

/*
 * Description :
 * Write the value on the required port.
 * If any pin in the port is output pin the value will be written.
 * If any pin in the port is input pin this will activate/deactivate the internal pull-up resistor.
 * If the input port number is not correct, The function will not handle the request and return an Error.
 * VIOLATION : Using u8 as the type of 2nd parameter instead of DIO_enumLogicState_t to make it more generic 
 */
DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,u8 Copy_value); 

/*
 * Description :
 * Read the value of the required Pin from its location an put it in the third parameter of the function Add_Pu8PinValue
 * If the input port number or pin number are not correct, The function will return an Error.
 */
DIO_enumError_t DIO_enumReadState(u8 Copy_enumPortNum,u8 Copy_enumPinNum,u8* Add_Pu8PinValue);

/*
 * Description :
 * This Function Provide a delay in milliseconds
 * You shall define the F_CPU before using it or it will be a default value of 1Mhz
 */
void DIO_DelayMs(u32 Copy_u32TimeMs);


#endif /* DIO_H_ */