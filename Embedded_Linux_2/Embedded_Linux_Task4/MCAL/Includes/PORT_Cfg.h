 /******************************************************************************
 *
 * Module: PORT_Cfg
 *
 * File Name: PORT_Cfg.h
 *
 * Description: Header file for the ATmega32 PORT driver Configurations
 *
 * Author: Momen Elsayed Shaban
 *
 *******************************************************************************/
 
  #ifndef PORT_CFG_H_
  #define PORT_CFG_H_
 
 /*******************************************************************************
 *                               Types Declaration                              *
 *******************************************************************************/
/* The default driver is the PRE-compile configured, if you want to use post compile define "POST_COMPILE_CONFEG" */
#define POST_COMPILE_CONFEG


#define NUM_OF_PORTS				4
#define NUM_OF_PINS_PER_PORT		8

#ifdef PRE_COMPILE_CONFEG
/* Pin Modes */
#define INPUT_PU					0   /*input pull up resistor activated*/
#define INPUT_HI					1   /*input high impedance*/
#define OUTPUT_HIGH					2
#define OUTPUT_LOW					3

/*Configurations for each PIN*/
/***********PORTA Confgs***************************/
#define DIO_PIN0_CONFG				INPUT_PU
#define DIO_PIN1_CONFG				INPUT_PU
#define DIO_PIN2_CONFG				INPUT_PU
#define DIO_PIN3_CONFG				INPUT_PU
#define DIO_PIN4_CONFG				INPUT_PU
#define DIO_PIN5_CONFG				INPUT_PU
#define DIO_PIN6_CONFG				INPUT_PU
#define DIO_PIN7_CONFG				INPUT_PU
/***********PORTB Confgs***************************/
#define DIO_PIN8_CONFG				INPUT_PU
#define DIO_PIN9_CONFG				INPUT_PU
#define DIO_PIN10_CONFG				INPUT_PU
#define DIO_PIN11_CONFG				INPUT_PU
#define DIO_PIN12_CONFG				INPUT_PU
#define DIO_PIN13_CONFG				INPUT_PU
#define DIO_PIN14_CONFG				INPUT_PU
#define DIO_PIN15_CONFG				INPUT_PU
/***********PORTC Confgs***************************/
#define DIO_PIN16_CONFG				INPUT_PU
#define DIO_PIN17_CONFG				INPUT_PU
#define DIO_PIN18_CONFG				INPUT_PU
#define DIO_PIN19_CONFG				INPUT_PU
#define DIO_PIN20_CONFG				INPUT_PU
#define DIO_PIN21_CONFG				INPUT_PU
#define DIO_PIN22_CONFG				INPUT_PU
#define DIO_PIN23_CONFG				INPUT_PU
/***********PORTD Confgs***************************/
#define DIO_PIN24_CONFG				INPUT_PU
#define DIO_PIN25_CONFG				INPUT_PU
#define DIO_PIN26_CONFG				INPUT_PU
#define DIO_PIN27_CONFG				INPUT_PU
#define DIO_PIN28_CONFG				INPUT_PU
#define DIO_PIN29_CONFG				INPUT_PU
#define DIO_PIN30_CONFG				INPUT_PU
#define DIO_PIN31_CONFG				INPUT_PU
#endif

#ifdef POST_COMPILE_CONFEG




#endif
 
#endif /* PORT_CFG_H_ */
