 /******************************************************************************
 *
 * Module: DIO
 *
 * File Name: DIO_Private.h
 *
 * Description: Header file for the ATmega32 DIO driver Addresses
 *
 * Author: Momen Elsayed Shaban
 *
 *******************************************************************************/

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H

#define PORTA					(*((volatile u8 *)0x3B))
#define DDRA					(*((volatile u8 *)0x3A))
#define PINA					(*((volatile u8 *)0x39))

#define PORTB					(*((volatile u8 *)0x38))
#define DDRB					(*((volatile u8 *)0x37))
#define PINB					(*((volatile u8 *)0x36))

#define PORTC					(*((volatile u8 *)0x35))
#define DDRC					(*((volatile u8 *)0x34))
#define PINC					(*((volatile u8 *)0x33))

#define PORTD					(*((volatile u8 *)0x32))
#define DDRD					(*((volatile u8 *)0x31))
#define PIND					(*((volatile u8 *)0x30))

#define DDRx_OFFSET				0x01
#define PINx_OFFSET				0x02

#define SFIOR					(*((volatile u8 *)0x50))
#define PUD						2U

#endif /*DIO_PRIVATE_H*/
