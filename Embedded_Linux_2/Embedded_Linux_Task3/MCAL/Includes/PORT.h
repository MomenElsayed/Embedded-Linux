 /******************************************************************************
 *
 * Module: PORT
 *
 * File Name: PORT.h
 *
 * Description: Header file for the ATmega32 PORT driver
 *
 * Author: Momen Elsayed Shaban
 *
 *******************************************************************************/
 #ifndef PORT_H_
 #define PORT_H_
 
#include "std_types.h"
#include "bitmath.h"
#include "PORT_Cfg.h"
 

#define PORTA_BASE_ADDRESS			0x3B
#define PORTB_BASE_ADDRESS			0x38
#define PORTC_BASE_ADDRESS			0x35
#define PORTD_BASE_ADDRESS			0x32
#define DDRx_OFFSET					0x01
#define PINx_OFFSET					0x02

typedef enum{
	PORT_enumOFF,
	PORT_enumPULL_UP,
	PORT_enumPULL_DOWN
}PORT_enumInternalResistor;

typedef enum{
	PORT_enumPinInput,
	PORT_enumOutput
}PORT_enumPinDirection;


typedef enum{
	PORT_enumPORTA = 0,
	PORT_enumPORTB,
	PORT_enumPORTC,
	PORT_enumPORTD

}PORT_enumPorts_t;

typedef enum{
	PORT_enumPin0 = 0,
	PORT_enumPin1,
	PORT_enumPin2,
	PORT_enumPin3,
	PORT_enumPin4,
	PORT_enumPin5,
	PORT_enumPin6,
	PORT_enumPin7
}PORT_enumPins_t;

typedef enum{
	PORT_enumLogicLow = 0,
	PORT_enumLogicHigh,
	PORT_enumFloating
}PORT_enumState_t;


typedef struct{
	PORT_enumPorts_t PORT_strPORT;
	PORT_enumPins_t PORT_strPIN;
	PORT_enumPinDirection PORT_strPinDir;
	PORT_enumInternalResistor PORT_strResistor;
	PORT_enumState_t PORT_PinInitialValue; /*in case the pin is output*/
}PORT_strPinConfig_t;

typedef enum{
	PORT_enumOK,
	PORT_enumINVALID_PIN,
	PORT_enumINVALID_PORT,
	PORT_enumINVALID_Mode,
	PORT_enumNullPointer
}PORT_enumError_t; 

typedef struct
{
	PORT_strPinConfig_t  Pins[NUM_OF_PINS_PER_PORT*NUM_OF_PORTS];
}PORT_ConfigType;
 
 /*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/
 /*
 * Description :
 * Setup the direction of the required pin from the options of (DIO_enumOutput, DIO_enumInputInternalPullUp, DIO_enumExInputExternalPullDown)
 * If the input port number or pin number are not correct, The function will not handle the request and return an Error.
 */
void PORT_Init();

PORT_enumError_t PORT_setPinConfig(PORT_strPinConfig_t* Add_strPinConfig);

 /*******************************************************************************
 *                              Extern Variables                                *
 *******************************************************************************/
#ifdef POST_COMPILE_CONFEG
extern PORT_ConfigType DIO_Pin_Cfg;
#endif /*POST_COMPILE_CONFEG*/

#endif /* PORT_H_ */
