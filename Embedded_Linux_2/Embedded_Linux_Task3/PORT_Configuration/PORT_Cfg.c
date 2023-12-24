 /******************************************************************************
 *
 * Module: PORT_Cfg
 *
 * File Name: PORT_Cfg.c
 *
 * Description: Source file for the ATmega32 PORT driver Configurations
 *
 * Author: Momen Elsayed Shaban
 *
 *******************************************************************************/
#include <PORT.h>
#ifdef POST_COMPILE_CONFEG 
PORT_ConfigType DIO_Pin_Cfg =
{
	.Pins={
	{PORT_enumPORTA,PORT_enumPin0,PORT_enumOutput,PORT_enumOFF,PORT_enumLogicLow},			  /*pin0 in PORTA*/
	{PORT_enumPORTA,PORT_enumPin1,PORT_enumOutput,PORT_enumOFF,PORT_enumLogicLow},			  /*pin1 in PORTA*/
	{PORT_enumPORTA,PORT_enumPin2,PORT_enumOutput,PORT_enumOFF,PORT_enumLogicLow},			  /*pin2 in PORTA*/
	{PORT_enumPORTA,PORT_enumPin3,PORT_enumOutput,PORT_enumOFF,PORT_enumLogicLow},			  /*pin3 in PORTA*/
	{PORT_enumPORTA,PORT_enumPin4,PORT_enumOutput,PORT_enumOFF,PORT_enumLogicLow},			  /*pin4 in PORTA*/
	{PORT_enumPORTA,PORT_enumPin5,PORT_enumOutput,PORT_enumOFF,PORT_enumLogicLow},			  /*pin5 in PORTA*/
	{PORT_enumPORTA,PORT_enumPin6,PORT_enumOutput,PORT_enumOFF,PORT_enumLogicLow},			  /*pin6 in PORTA*/
	{PORT_enumPORTA,PORT_enumPin7,PORT_enumOutput,PORT_enumOFF,PORT_enumLogicLow},			  /*pin7 in PORTA*/
	/**********PORTB************/
	{PORT_enumPORTB,PORT_enumPin0,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin0 in PORTB*/
	{PORT_enumPORTB,PORT_enumPin1,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin1 in PORTB*/
	{PORT_enumPORTB,PORT_enumPin2,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin2 in PORTB*/
	{PORT_enumPORTB,PORT_enumPin3,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin3 in PORTB*/
	{PORT_enumPORTB,PORT_enumPin4,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin4 in PORTB*/
	{PORT_enumPORTB,PORT_enumPin5,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin5 in PORTB*/
	{PORT_enumPORTB,PORT_enumPin6,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin6 in PORTB*/
	{PORT_enumPORTB,PORT_enumPin7,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin7 in PORTB*/
	/**********PORTC************/
	{PORT_enumPORTC,PORT_enumPin0,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin0 in PORTC*/
	{PORT_enumPORTC,PORT_enumPin1,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin1 in PORTC*/
	{PORT_enumPORTC,PORT_enumPin2,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin2 in PORTC*/
	{PORT_enumPORTC,PORT_enumPin3,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin3 in PORTC*/
	{PORT_enumPORTC,PORT_enumPin4,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin4 in PORTC*/
	{PORT_enumPORTC,PORT_enumPin5,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin5 in PORTC*/
	{PORT_enumPORTC,PORT_enumPin6,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin6 in PORTC*/
	{PORT_enumPORTC,PORT_enumPin7,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin7 in PORTC*/
	/**********PORTD************/
	{PORT_enumPORTD,PORT_enumPin0,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin0 in PORTD*/
	{PORT_enumPORTD,PORT_enumPin1,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin1 in PORTD*/
	{PORT_enumPORTD,PORT_enumPin2,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin2 in PORTD*/
	{PORT_enumPORTD,PORT_enumPin3,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin3 in PORTD*/
	{PORT_enumPORTD,PORT_enumPin4,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin4 in PORTD*/
	{PORT_enumPORTD,PORT_enumPin5,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin5 in PORTD*/
	{PORT_enumPORTD,PORT_enumPin6,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin6 in PORTD*/
	{PORT_enumPORTD,PORT_enumPin7,PORT_enumPinInput,PORT_enumPULL_UP,PORT_enumFloating},			  /*pin7 in PORTD*/
	}
};
#endif /*POST_COMPILE_CONFEG*/
