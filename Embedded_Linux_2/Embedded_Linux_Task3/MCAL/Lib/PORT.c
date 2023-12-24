 /******************************************************************************
 *
 * Module: PORT
 *
 * File Name: PORT.c
 *
 * Description: Source file for the ATmega32 PORT driver
 *
 * Author: Momen Elsayed Shaban
 *
 *******************************************************************************/
#include "PORT.h"
#include "DIO_Private.h"
#include "PORT_Cfg.h"
#include "DIO.h"

#ifdef PRE_COMPILE_CONFEG

 #define CONCAT_HELPER(pin7,pin6,pin5,pin4,pin3,pin2,pin1,pin0)	(0b##pin7##pin6##pin5##pin4##pin3##pin2##pin1##pin0)
 #define CONCAT(a,b,c,d,e,f,g,h)								CONCAT_HELPER(a,b,c,d,e,f,g,h)
 
 /*******************************************************************************
 *                          PRE-Compile Configurations                          *
 *******************************************************************************/
 /************************PORTA PIN0 Configurations*****************************/
 #if DIO_PIN0_CONFG == INPUT_PU
 #define PIN0_DIR				LOGIC_LOW
 #define PIN0_PORT				LOGIC_HIGH
 #elif DIO_PIN0_CONFG == INPUT_HI
 #define PIN0_DIR				LOGIC_LOW
 #define PIN0_PORT				LOGIC_LOW
 #elif DIO_PIN0_CONFG == OUTPUT_HIGH
 #define PIN0_DIR				LOGIC_HIGH
 #define PIN0_PORT				LOGIC_HIGH
 #elif DIO_PIN0_CONFG == OUTPUT_LOW	
 #define PIN0_DIR				LOGIC_HIGH
 #define PIN0_PORT				LOGIC_LOW
 #else
 #error "Invalid Configuration"
 #endif
 /************************PORTA PIN1 Configurations*****************************/ 
 #if DIO_PIN1_CONFG == INPUT_PU
 #define PIN1_DIR				LOGIC_LOW
 #define PIN1_PORT				LOGIC_HIGH
 #elif DIO_PIN1_CONFG == INPUT_HI
 #define PIN1_DIR				LOGIC_LOW
 #define PIN1_PORT				LOGIC_LOW
 #elif DIO_PIN1_CONFG == OUTPUT_HIGH
 #define PIN1_DIR				LOGIC_HIGH
 #define PIN1_PORT				LOGIC_HIGH
 #elif DIO_PIN1_CONFG == OUTPUT_LOW	
 #define PIN1_DIR				LOGIC_HIGH
 #define PIN1_PORT				LOGIC_LOW
 #else
 #error "Invalid Configuration"
 #endif
 /************************PORTA PIN2 Configurations*****************************/
 #if DIO_PIN2_CONFG == INPUT_PU
 #define PIN2_DIR				LOGIC_LOW
 #define PIN2_PORT				LOGIC_HIGH
 #elif DIO_PIN2_CONFG == INPUT_HI
 #define PIN2_DIR				LOGIC_LOW
 #define PIN2_PORT				LOGIC_LOW
 #elif DIO_PIN2_CONFG == OUTPUT_HIGH
 #define PIN2_DIR				LOGIC_HIGH
 #define PIN2_PORT				LOGIC_HIGH
 #elif DIO_PIN2_CONFG == OUTPUT_LOW
 #define PIN2_DIR				LOGIC_HIGH
 #define PIN2_PORT				LOGIC_LOW
 #else
 #error "Invalid Configuration"
 #endif
/************************PORTA PIN3 Configurations*****************************/
#if DIO_PIN3_CONFG == INPUT_PU
#define PIN3_DIR				LOGIC_LOW
#define PIN3_PORT				LOGIC_HIGH
#elif DIO_PIN3_CONFG == INPUT_HI
#define PIN3_DIR				LOGIC_LOW
#define PIN3_PORT				LOGIC_LOW
#elif DIO_PIN3_CONFG == OUTPUT_HIGH
#define PIN3_DIR				LOGIC_HIGH
#define PIN3_PORT				LOGIC_HIGH
#elif DIO_PIN3_CONFG == OUTPUT_LOW
#define PIN3_DIR				LOGIC_HIGH
#define PIN3_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTA PIN4 Configurations*****************************/
#if DIO_PIN4_CONFG == INPUT_PU
#define PIN4_DIR				LOGIC_LOW
#define PIN4_PORT				LOGIC_HIGH
#elif DIO_PIN4_CONFG == INPUT_HI
#define PIN4_DIR				LOGIC_LOW
#define PIN4_PORT				LOGIC_LOW
#elif DIO_PIN4_CONFG == OUTPUT_HIGH
#define PIN4_DIR				LOGIC_HIGH
#define PIN4_PORT				LOGIC_HIGH
#elif DIO_PIN4_CONFG == OUTPUT_LOW
#define PIN4_DIR				LOGIC_HIGH
#define PIN4_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTA PIN5 Configurations*****************************/
#if DIO_PIN5_CONFG == INPUT_PU
#define PIN5_DIR				LOGIC_LOW
#define PIN5_PORT				LOGIC_HIGH
#elif DIO_PIN5_CONFG == INPUT_HI
#define PIN5_DIR				LOGIC_LOW
#define PIN5_PORT				LOGIC_LOW
#elif DIO_PIN5_CONFG == OUTPUT_HIGH
#define PIN5_DIR				LOGIC_HIGH
#define PIN5_PORT				LOGIC_HIGH
#elif DIO_PIN5_CONFG == OUTPUT_LOW
#define PIN5_DIR				LOGIC_HIGH
#define PIN5_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTA PIN6 Configurations*****************************/
#if DIO_PIN6_CONFG == INPUT_PU
#define PIN6_DIR				LOGIC_LOW
#define PIN6_PORT				LOGIC_HIGH
#elif DIO_PIN6_CONFG == INPUT_HI
#define PIN6_DIR				LOGIC_LOW
#define PIN6_PORT				LOGIC_LOW
#elif DIO_PIN6_CONFG == OUTPUT_HIGH
#define PIN6_DIR				LOGIC_HIGH
#define PIN6_PORT				LOGIC_HIGH
#elif DIO_PIN6_CONFG == OUTPUT_LOW
#define PIN6_DIR				LOGIC_HIGH
#define PIN6_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTA PIN7 Configurations*****************************/
#if DIO_PIN7_CONFG == INPUT_PU
#define PIN7_DIR				LOGIC_LOW
#define PIN7_PORT				LOGIC_HIGH
#elif DIO_PIN7_CONFG == INPUT_HI
#define PIN7_DIR				LOGIC_LOW
#define PIN7_PORT				LOGIC_LOW
#elif DIO_PIN7_CONFG == OUTPUT_HIGH
#define PIN7_DIR				LOGIC_HIGH
#define PIN7_PORT				LOGIC_HIGH
#elif DIO_PIN7_CONFG == OUTPUT_LOW
#define PIN7_DIR				LOGIC_HIGH
#define PIN7_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTB PIN0 Configurations*****************************/
#if DIO_PIN8_CONFG == INPUT_PU
#define PIN8_DIR				LOGIC_LOW
#define PIN8_PORT				LOGIC_HIGH
#elif DIO_PIN8_CONFG == INPUT_HI
#define PIN8_DIR				LOGIC_LOW
#define PIN8_PORT				LOGIC_LOW
#elif DIO_PIN8_CONFG == OUTPUT_HIGH
#define PIN8_DIR				LOGIC_HIGH
#define PIN8_PORT				LOGIC_HIGH
#elif DIO_PIN8_CONFG == OUTPUT_LOW
#define PIN8_DIR				LOGIC_HIGH
#define PIN8_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif 
/************************PORTB PIN1 Configurations*****************************/
#if DIO_PIN9_CONFG == INPUT_PU
#define PIN9_DIR				LOGIC_LOW
#define PIN9_PORT				LOGIC_HIGH
#elif DIO_PIN9_CONFG == INPUT_HI
#define PIN9_DIR				LOGIC_LOW
#define PIN9_PORT				LOGIC_LOW
#elif DIO_PIN9_CONFG == OUTPUT_HIGH
#define PIN9_DIR				LOGIC_HIGH
#define PIN9_PORT				LOGIC_HIGH
#elif DIO_PIN9_CONFG == OUTPUT_LOW
#define PIN9_DIR				LOGIC_HIGH
#define PIN9_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTB PIN2 Configurations*****************************/
#if DIO_PIN10_CONFG == INPUT_PU
#define PIN10_DIR				LOGIC_LOW
#define PIN10_PORT				LOGIC_HIGH
#elif DIO_PIN10_CONFG == INPUT_HI
#define PIN10_DIR				LOGIC_LOW
#define PIN10_PORT				LOGIC_LOW
#elif DIO_PIN10_CONFG == OUTPUT_HIGH
#define PIN10_DIR				LOGIC_HIGH
#define PIN10_PORT				LOGIC_HIGH
#elif DIO_PIN10_CONFG == OUTPUT_LOW
#define PIN10_DIR				LOGIC_HIGH
#define PIN10_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTB PIN3 Configurations*****************************/
#if DIO_PIN11_CONFG == INPUT_PU
#define PIN11_DIR				LOGIC_LOW
#define PIN11_PORT				LOGIC_HIGH
#elif DIO_PIN11_CONFG == INPUT_HI
#define PIN11_DIR				LOGIC_LOW
#define PIN11_PORT				LOGIC_LOW
#elif DIO_PIN11_CONFG == OUTPUT_HIGH
#define PIN11_DIR				LOGIC_HIGH
#define PIN11_PORT				LOGIC_HIGH
#elif DIO_PIN11_CONFG == OUTPUT_LOW
#define PIN11_DIR				LOGIC_HIGH
#define PIN11_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTB PIN4 Configurations*****************************/
#if DIO_PIN12_CONFG == INPUT_PU
#define PIN12_DIR				LOGIC_LOW
#define PIN12_PORT				LOGIC_HIGH
#elif DIO_PIN12_CONFG == INPUT_HI
#define PIN12_DIR				LOGIC_LOW
#define PIN12_PORT				LOGIC_LOW
#elif DIO_PIN12_CONFG == OUTPUT_HIGH
#define PIN12_DIR				LOGIC_HIGH
#define PIN12_PORT				LOGIC_HIGH
#elif DIO_PIN12_CONFG == OUTPUT_LOW
#define PIN12_DIR				LOGIC_HIGH
#define PIN12_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTB PIN5 Configurations*****************************/
#if DIO_PIN13_CONFG == INPUT_PU
#define PIN13_DIR				LOGIC_LOW
#define PIN13_PORT				LOGIC_HIGH
#elif DIO_PIN13_CONFG == INPUT_HI
#define PIN13_DIR				LOGIC_LOW
#define PIN13_PORT				LOGIC_LOW
#elif DIO_PIN13_CONFG == OUTPUT_HIGH
#define PIN13_DIR				LOGIC_HIGH
#define PIN13_PORT				LOGIC_HIGH
#elif DIO_PIN13_CONFG == OUTPUT_LOW
#define PIN13_DIR				LOGIC_HIGH
#define PIN13_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTB PIN6 Configurations*****************************/
#if DIO_PIN14_CONFG == INPUT_PU
#define PIN14_DIR				LOGIC_LOW
#define PIN14_PORT				LOGIC_HIGH
#elif DIO_PIN14_CONFG == INPUT_HI
#define PIN14_DIR				LOGIC_LOW
#define PIN14_PORT				LOGIC_LOW
#elif DIO_PIN14_CONFG == OUTPUT_HIGH
#define PIN14_DIR				LOGIC_HIGH
#define PIN14_PORT				LOGIC_HIGH
#elif DIO_PIN14_CONFG == OUTPUT_LOW
#define PIN14_DIR				LOGIC_HIGH
#define PIN14_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTB PIN7 Configurations*****************************/
#if DIO_PIN15_CONFG == INPUT_PU
#define PIN15_DIR				LOGIC_LOW
#define PIN15_PORT				LOGIC_HIGH
#elif DIO_PIN15_CONFG == INPUT_HI
#define PIN15_DIR				LOGIC_LOW
#define PIN15_PORT				LOGIC_LOW
#elif DIO_PIN15_CONFG == OUTPUT_HIGH
#define PIN15_DIR				LOGIC_HIGH
#define PIN15_PORT				LOGIC_HIGH
#elif DIO_PIN15_CONFG == OUTPUT_LOW
#define PIN15_DIR				LOGIC_HIGH
#define PIN15_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTC PIN0 Configurations*****************************/
#if DIO_PIN16_CONFG == INPUT_PU
#define PIN16_DIR				LOGIC_LOW
#define PIN16_PORT				LOGIC_HIGH
#elif DIO_PIN16_CONFG == INPUT_HI
#define PIN16_DIR				LOGIC_LOW
#define PIN16_PORT				LOGIC_LOW
#elif DIO_PIN16_CONFG == OUTPUT_HIGH
#define PIN16_DIR				LOGIC_HIGH
#define PIN16_PORT				LOGIC_HIGH
#elif DIO_PIN16_CONFG == OUTPUT_LOW
#define PIN16_DIR				LOGIC_HIGH
#define PIN16_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTC PIN1 Configurations*****************************/
#if DIO_PIN17_CONFG == INPUT_PU
#define PIN17_DIR				LOGIC_LOW
#define PIN17_PORT				LOGIC_HIGH
#elif DIO_PIN17_CONFG == INPUT_HI
#define PIN17_DIR				LOGIC_LOW
#define PIN17_PORT				LOGIC_LOW
#elif DIO_PIN17_CONFG == OUTPUT_HIGH
#define PIN17_DIR				LOGIC_HIGH
#define PIN17_PORT				LOGIC_HIGH
#elif DIO_PIN17_CONFG == OUTPUT_LOW
#define PIN17_DIR				LOGIC_HIGH
#define PIN17_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTC PIN2 Configurations*****************************/
#if DIO_PIN18_CONFG == INPUT_PU
#define PIN18_DIR				LOGIC_LOW
#define PIN18_PORT				LOGIC_HIGH
#elif DIO_PIN18_CONFG == INPUT_HI
#define PIN18_DIR				LOGIC_LOW
#define PIN18_PORT				LOGIC_LOW
#elif DIO_PIN18_CONFG == OUTPUT_HIGH
#define PIN18_DIR				LOGIC_HIGH
#define PIN18_PORT				LOGIC_HIGH
#elif DIO_PIN18_CONFG == OUTPUT_LOW
#define PIN18_DIR				LOGIC_HIGH
#define PIN18_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTC PIN3 Configurations*****************************/
#if DIO_PIN19_CONFG == INPUT_PU
#define PIN19_DIR				LOGIC_LOW
#define PIN19_PORT				LOGIC_HIGH
#elif DIO_PIN19_CONFG == INPUT_HI
#define PIN19_DIR				LOGIC_LOW
#define PIN19_PORT				LOGIC_LOW
#elif DIO_PIN19_CONFG == OUTPUT_HIGH
#define PIN19_DIR				LOGIC_HIGH
#define PIN19_PORT				LOGIC_HIGH
#elif DIO_PIN19_CONFG == OUTPUT_LOW
#define PIN19_DIR				LOGIC_HIGH
#define PIN19_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTC PIN4 Configurations*****************************/
#if DIO_PIN20_CONFG == INPUT_PU
#define PIN20_DIR				LOGIC_LOW
#define PIN20_PORT				LOGIC_HIGH
#elif DIO_PIN20_CONFG == INPUT_HI
#define PIN20_DIR				LOGIC_LOW
#define PIN20_PORT				LOGIC_LOW
#elif DIO_PIN20_CONFG == OUTPUT_HIGH
#define PIN20_DIR				LOGIC_HIGH
#define PIN20_PORT				LOGIC_HIGH
#elif DIO_PIN20_CONFG == OUTPUT_LOW
#define PIN20_DIR				LOGIC_HIGH
#define PIN20_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTC PIN5 Configurations*****************************/
#if DIO_PIN21_CONFG == INPUT_PU
#define PIN21_DIR				LOGIC_LOW
#define PIN21_PORT				LOGIC_HIGH
#elif DIO_PIN21_CONFG == INPUT_HI
#define PIN21_DIR				LOGIC_LOW
#define PIN21_PORT				LOGIC_LOW
#elif DIO_PIN21_CONFG == OUTPUT_HIGH
#define PIN21_DIR				LOGIC_HIGH
#define PIN21_PORT				LOGIC_HIGH
#elif DIO_PIN21_CONFG == OUTPUT_LOW
#define PIN21_DIR				LOGIC_HIGH
#define PIN21_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTC PIN6 Configurations*****************************/
#if DIO_PIN22_CONFG == INPUT_PU
#define PIN22_DIR				LOGIC_LOW
#define PIN22_PORT				LOGIC_HIGH
#elif DIO_PIN22_CONFG == INPUT_HI
#define PIN22_DIR				LOGIC_LOW
#define PIN22_PORT				LOGIC_LOW
#elif DIO_PIN22_CONFG == OUTPUT_HIGH
#define PIN22_DIR				LOGIC_HIGH
#define PIN22_PORT				LOGIC_HIGH
#elif DIO_PIN22_CONFG == OUTPUT_LOW
#define PIN22_DIR				LOGIC_HIGH
#define PIN22_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTC PIN7 Configurations*****************************/
#if DIO_PIN23_CONFG == INPUT_PU
#define PIN23_DIR				LOGIC_LOW
#define PIN23_PORT				LOGIC_HIGH
#elif DIO_PIN23_CONFG == INPUT_HI
#define PIN23_DIR				LOGIC_LOW
#define PIN23_PORT				LOGIC_LOW
#elif DIO_PIN23_CONFG == OUTPUT_HIGH
#define PIN23_DIR				LOGIC_HIGH
#define PIN23_PORT				LOGIC_HIGH
#elif DIO_PIN23_CONFG == OUTPUT_LOW
#define PIN23_DIR				LOGIC_HIGH
#define PIN23_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTD PIN0 Configurations*****************************/
#if DIO_PIN24_CONFG == INPUT_PU
#define PIN24_DIR				LOGIC_LOW
#define PIN24_PORT				LOGIC_HIGH
#elif DIO_PIN24_CONFG == INPUT_HI
#define PIN24_DIR				LOGIC_LOW
#define PIN24_PORT				LOGIC_LOW
#elif DIO_PIN24_CONFG == OUTPUT_HIGH
#define PIN24_DIR				LOGIC_HIGH
#define PIN24_PORT				LOGIC_HIGH
#elif DIO_PIN24_CONFG == OUTPUT_LOW
#define PIN24_DIR				LOGIC_HIGH
#define PIN24_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTD PIN1 Configurations*****************************/
#if DIO_PIN25_CONFG == INPUT_PU
#define PIN25_DIR				LOGIC_LOW
#define PIN25_PORT				LOGIC_HIGH
#elif DIO_PIN25_CONFG == INPUT_HI
#define PIN25_DIR				LOGIC_LOW
#define PIN25_PORT				LOGIC_LOW
#elif DIO_PIN25_CONFG == OUTPUT_HIGH
#define PIN25_DIR				LOGIC_HIGH
#define PIN25_PORT				LOGIC_HIGH
#elif DIO_PIN25_CONFG == OUTPUT_LOW
#define PIN25_DIR				LOGIC_HIGH
#define PIN25_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTD PIN2 Configurations*****************************/
#if DIO_PIN26_CONFG == INPUT_PU
#define PIN26_DIR				LOGIC_LOW
#define PIN26_PORT				LOGIC_HIGH
#elif DIO_PIN26_CONFG == INPUT_HI
#define PIN26_DIR				LOGIC_LOW
#define PIN26_PORT				LOGIC_LOW
#elif DIO_PIN26_CONFG == OUTPUT_HIGH
#define PIN26_DIR				LOGIC_HIGH
#define PIN26_PORT				LOGIC_HIGH
#elif DIO_PIN26_CONFG == OUTPUT_LOW
#define PIN26_DIR				LOGIC_HIGH
#define PIN26_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTD PIN3 Configurations*****************************/
#if DIO_PIN27_CONFG == INPUT_PU
#define PIN27_DIR				LOGIC_LOW
#define PIN27_PORT				LOGIC_HIGH
#elif DIO_PIN27_CONFG == INPUT_HI
#define PIN27_DIR				LOGIC_LOW
#define PIN27_PORT				LOGIC_LOW
#elif DIO_PIN27_CONFG == OUTPUT_HIGH
#define PIN27_DIR				LOGIC_HIGH
#define PIN27_PORT				LOGIC_HIGH
#elif DIO_PIN27_CONFG == OUTPUT_LOW
#define PIN27_DIR				LOGIC_HIGH
#define PIN27_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTD PIN4 Configurations*****************************/
#if DIO_PIN28_CONFG == INPUT_PU
#define PIN28_DIR				LOGIC_LOW
#define PIN28_PORT				LOGIC_HIGH
#elif DIO_PIN28_CONFG == INPUT_HI
#define PIN28_DIR				LOGIC_LOW
#define PIN28_PORT				LOGIC_LOW
#elif DIO_PIN28_CONFG == OUTPUT_HIGH
#define PIN28_DIR				LOGIC_HIGH
#define PIN28_PORT				LOGIC_HIGH
#elif DIO_PIN28_CONFG == OUTPUT_LOW
#define PIN28_DIR				LOGIC_HIGH
#define PIN28_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTD PIN5 Configurations*****************************/
#if DIO_PIN29_CONFG == INPUT_PU
#define PIN29_DIR				LOGIC_LOW
#define PIN29_PORT				LOGIC_HIGH
#elif DIO_PIN29_CONFG == INPUT_HI
#define PIN29_DIR				LOGIC_LOW
#define PIN29_PORT				LOGIC_LOW
#elif DIO_PIN29_CONFG == OUTPUT_HIGH
#define PIN29_DIR				LOGIC_HIGH
#define PIN29_PORT				LOGIC_HIGH
#elif DIO_PIN29_CONFG == OUTPUT_LOW
#define PIN29_DIR				LOGIC_HIGH
#define PIN29_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTD PIN6 Configurations*****************************/
#if DIO_PIN30_CONFG == INPUT_PU
#define PIN30_DIR				LOGIC_LOW
#define PIN30_PORT				LOGIC_HIGH
#elif DIO_PIN30_CONFG == INPUT_HI
#define PIN30_DIR				LOGIC_LOW
#define PIN30_PORT				LOGIC_LOW
#elif DIO_PIN30_CONFG == OUTPUT_HIGH
#define PIN30_DIR				LOGIC_HIGH
#define PIN30_PORT				LOGIC_HIGH
#elif DIO_PIN30_CONFG == OUTPUT_LOW
#define PIN30_DIR				LOGIC_HIGH
#define PIN30_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif
/************************PORTD PIN7 Configurations*****************************/
#if DIO_PIN31_CONFG == INPUT_PU
#define PIN31_DIR				LOGIC_LOW
#define PIN31_PORT				LOGIC_HIGH
#elif DIO_PIN31_CONFG == INPUT_HI
#define PIN31_DIR				LOGIC_LOW
#define PIN31_PORT				LOGIC_LOW
#elif DIO_PIN31_CONFG == OUTPUT_HIGH
#define PIN31_DIR				LOGIC_HIGH
#define PIN31_PORT				LOGIC_HIGH
#elif DIO_PIN31_CONFG == OUTPUT_LOW
#define PIN31_DIR				LOGIC_HIGH
#define PIN31_PORT				LOGIC_LOW
#else
#error "Invalid Configuration"
#endif



void PORT_Init()
{	/* minimum no. of selected ports is 2*/
	DDRA  = CONCAT(PIN7_DIR,PIN6_DIR,PIN5_DIR,PIN4_DIR,PIN3_DIR,PIN2_DIR,PIN1_DIR,PIN0_DIR);
	PORTA = CONCAT(PIN7_PORT,PIN6_PORT,PIN5_PORT,PIN4_PORT,PIN3_PORT,PIN2_PORT,PIN1_PORT,PIN0_PORT);
	
	DDRB  = CONCAT(PIN15_DIR,PIN14_DIR,PIN13_DIR,PIN12_DIR,PIN11_DIR,PIN10_DIR,PIN9_DIR,PIN8_DIR);
	PORTB = CONCAT(PIN15_PORT,PIN14_PORT,PIN13_PORT,PIN12_PORT,PIN11_PORT,PIN10_PORT,PIN9_PORT,PIN8_PORT);
	
	#if NUM_OF_PORTS == 3
	DDRC  = CONCAT(PIN23_DIR,PIN22_DIR,PIN21_DIR,PIN20_DIR,PIN19_DIR,PIN18_DIR,PIN17_DIR,PIN16_DIR);
	PORTC = CONCAT(PIN23_PORT,PIN22_PORT,PIN21_PORT,PIN20_PORT,PIN19_PORT,PIN18_PORT,PIN17_PORT,PIN16_PORT);
	
	#elif NUM_OF_PORTS == 4
	DDRC  = CONCAT(PIN23_DIR,PIN22_DIR,PIN21_DIR,PIN20_DIR,PIN19_DIR,PIN18_DIR,PIN17_DIR,PIN16_DIR);
	PORTC = CONCAT(PIN23_PORT,PIN22_PORT,PIN21_PORT,PIN20_PORT,PIN19_PORT,PIN18_PORT,PIN17_PORT,PIN16_PORT);
	
	DDRD  = CONCAT(PIN31_DIR,PIN30_DIR,PIN29_DIR,PIN28_DIR,PIN27_DIR,PIN26_DIR,PIN25_DIR,PIN24_DIR);
	PORTD = CONCAT(PIN31_PORT,PIN30_PORT,PIN29_PORT,PIN28_PORT,PIN27_PORT,PIN26_PORT,PIN25_PORT,PIN24_PORT);
	
	#endif
}
 
#endif /*PRE_COMPILE_CONFEG*/ 


#ifdef POST_COMPILE_CONFEG


void PORT_Init()
{
	u8 i = 0;
	volatile u8* loc_PortPtr = NULL_PTR;

	for (i = 0; i < (NUM_OF_PINS_PER_PORT * NUM_OF_PORTS); i++)
	{
		switch (DIO_Pin_Cfg.Pins[i].PORT_strPORT)
		{
			case PORT_enumPORTA: loc_PortPtr = (volatile u8 *)PORTA_BASE_ADDRESS;
			break;
			case PORT_enumPORTB: loc_PortPtr = (volatile u8 *)PORTB_BASE_ADDRESS;
			break;
			case PORT_enumPORTC: loc_PortPtr = (volatile u8 *)PORTC_BASE_ADDRESS;
			break;
			case PORT_enumPORTD: loc_PortPtr = (volatile u8 *)PORTD_BASE_ADDRESS;
			break;
			default: /*DO Nothing*/
			break;
		}

		if (DIO_Pin_Cfg.Pins[i].PORT_strPinDir == PORT_enumOutput)
		{
			SET_BIT(*(volatile u8 *)(loc_PortPtr-DDRx_OFFSET), DIO_Pin_Cfg.Pins[i].PORT_strPIN);

			if (DIO_Pin_Cfg.Pins[i].PORT_PinInitialValue == PORT_enumLogicHigh)
			{
				SET_BIT(*(volatile u8 *)(loc_PortPtr), DIO_Pin_Cfg.Pins[i].PORT_strPIN);
			}
			else
			{
				CLEAR_BIT(*(volatile u8 *)(loc_PortPtr), DIO_Pin_Cfg.Pins[i].PORT_strPIN);
			}
		}
		else if (DIO_Pin_Cfg.Pins[i].PORT_strPinDir == PORT_enumPinInput)
		{
			CLEAR_BIT(*(volatile u8 *)(loc_PortPtr-DDRx_OFFSET), DIO_Pin_Cfg.Pins[i].PORT_strPIN);

			if (DIO_Pin_Cfg.Pins[i].PORT_strResistor == PORT_enumPULL_DOWN)
			{
				CLEAR_BIT(*(volatile u8 *)(loc_PortPtr), DIO_Pin_Cfg.Pins[i].PORT_strPIN);
			}
			else if (DIO_Pin_Cfg.Pins[i].PORT_strResistor == PORT_enumPULL_UP)
			{
				//SET_BIT(*(volatile u8 *)(loc_PortPtr), DIO_Pin_Cfg.Pins[i].PORT_strPIN);   /*the default is pull-up so no need for this line*/
			}
			else
			{
				/*Do Nothing*/
			}
		}
		else
		{
			/* Do Nothing*/
		}
	}
}


PORT_enumError_t PORT_setPinConfig(PORT_strPinConfig_t* Add_strPinConfig)
{
	PORT_enumError_t loc_PortConfigError = PORT_enumOK;
	volatile u8* loc_PortConfigPtr = NULL;
	switch(Add_strPinConfig->PORT_strPORT)
	{
		case PORT_enumPORTA: loc_PortConfigPtr = (volatile u8*)PORTA_BASE_ADDRESS;
		break;
		case PORT_enumPORTB: loc_PortConfigPtr = (volatile u8*)PORTB_BASE_ADDRESS;
		break;
		case PORT_enumPORTC: loc_PortConfigPtr = (volatile u8*)PORTC_BASE_ADDRESS;
		break;
		case PORT_enumPORTD: loc_PortConfigPtr = (volatile u8*)PORTD_BASE_ADDRESS;
		break;
		default: loc_PortConfigError = PORT_enumNullPointer;
		break;
	}
	
	if (Add_strPinConfig ->PORT_strPinDir == PORT_enumOutput)
	{
		SET_BIT(*(volatile u8 *)(loc_PortConfigPtr-DDRx_OFFSET), Add_strPinConfig->PORT_strPIN);
		if (Add_strPinConfig->PORT_PinInitialValue == PORT_enumLogicHigh)
		{
			SET_BIT((*(volatile u8*)loc_PortConfigPtr),Add_strPinConfig->PORT_strPIN);
		}
		else
		{
			CLEAR_BIT((*(volatile u8*)loc_PortConfigPtr),Add_strPinConfig->PORT_strPIN);
		}
		
	}
	else if (Add_strPinConfig ->PORT_strPinDir == PORT_enumPinInput)
	{
		CLEAR_BIT(*(volatile u8 *)(loc_PortConfigPtr-DDRx_OFFSET), Add_strPinConfig->PORT_strPIN);
		if(Add_strPinConfig->PORT_strResistor == PORT_enumPULL_DOWN)
		{
			CLEAR_BIT((*(volatile u8*)loc_PortConfigPtr),Add_strPinConfig->PORT_strPIN);
		}
		else if(Add_strPinConfig->PORT_strResistor == PORT_enumPULL_UP)
		{
			SET_BIT((*(volatile u8*)loc_PortConfigPtr),Add_strPinConfig->PORT_strPIN);
		}
		else
		{
			/*Do Nothing*/
		}
	}
	else{
		loc_PortConfigError = PORT_enumINVALID_Mode;
	}
	return loc_PortConfigError;
	
}

#endif /*POST_COMPILE_CONFEG*/




