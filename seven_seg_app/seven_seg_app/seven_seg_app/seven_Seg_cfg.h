/*
 * seven_Seg_cfg.h
 *
 * Created: 11/18/2022 1:03:00 PM
 *  Author: safifi
 */ 


#ifndef SEVEN_SEG_CFG_H_
#define SEVEN_SEG_CFG_H_
#include "std_macros.h"

//#define SS_ANODE
#define SEVEN_SEG_INIT_PORTS() DDRD |= 0x7f; PORTD = 0x7f; SETBIT(DDRB,0); SETBIT(DDRB,1); SETBIT(DDRB,2); SETBIT(DDRB,3);
#define SS_PORT PORTD

#ifdef SS_ANODE
	#define EN1_DIS() CLRBIT(PORTB,0);
	#define EN1_EN()  SETBIT(PORTB,0);
	#define EN2_DIS() CLRBIT(PORTB,1);
	#define EN2_EN()  SETBIT(PORTB,1);
	#define EN3_DIS() CLRBIT(PORTB,2);
	#define EN3_EN()  SETBIT(PORTB,2);
	#define EN4_DIS() CLRBIT(PORTB,3);
	#define EN4_EN()  SETBIT(PORTB,3);
#else
	#define EN1_DIS() SETBIT(PORTB,0);
	#define EN1_EN()  CLRBIT(PORTB,0);
	#define EN2_DIS() SETBIT(PORTB,1);
	#define EN2_EN()  CLRBIT(PORTB,1);
	#define EN3_DIS() SETBIT(PORTB,2);
	#define EN3_EN()  CLRBIT(PORTB,2);
	#define EN4_DIS() SETBIT(PORTB,3);
	#define EN4_EN()  CLRBIT(PORTB,3);
#endif
#endif /* SEVEN_SEG_CFG_H_ */