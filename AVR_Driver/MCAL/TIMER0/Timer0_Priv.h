/*
 * Timer0_Priv.h
 *
 * Created: 7/10/2023 11:52:43 PM
 *  Author: karim
 */ 


#ifndef TIMER0_PRIV_H_
#define TIMER0_PRIV_H_

/***********************************************************************************/
/*  								REGISTERS ADDRESSES							   */
/***********************************************************************************/
#define TCCR0  					*((volatile uint8_t*)0x53)
#define TCNT0 					*((volatile uint8_t*)0x52)
#define OCR0 					*((volatile uint8_t*)0x5C)
#define TIMSK 					*((volatile uint8_t*)0x59)
#define TIFR 					*((volatile uint8_t*)0x58)
#define SFIOR 					*((volatile uint8_t*)0x50)

/***********************************************************************************/
/* 					                TCCR0 REGISTER BITS							   */
/***********************************************************************************/
#define FOC0							7
#define WGM00							6
#define COM01							5
#define COM00							4
#define WGM01							3
#define CS02							2
#define CS01							1
#define CS00							0


/***********************************************************************************/
/* 					                TIMSK REGISTER BITS							   */
/***********************************************************************************/
#define OCIE0							1
#define TOIE0							0



/***********************************************************************************/
/* 					                TIFR REGISTER BITS							   */
/***********************************************************************************/
#define OCF0							1
#define TOV0							0

/***********************************************************************************/
/* 					                SFIOR REGISTER BITS							   */
/***********************************************************************************/
#define PSR10							0
/***********************************************************************************/


/***********************************************************************************/
/* 					                TIMER MODES							   		   */
/***********************************************************************************/
#define NORMAL							0
#define PHASE_CORRECT					1
#define CTC								2
#define FAST_PWM						3

/***********************************************************************************/
/*             OUTPUT COMPARE PIN (OC0) BEHAVIOUR IN CASE OF NON-PWM MODE          */
/***********************************************************************************/
#define DISCONNECT_OC0					0
#define TOGGLE_OC0						1
#define CLEAR_OC0						2
#define SET_OC0							3

/***********************************************************************************/
/*             OUTPUT COMPARE PIN (OC0) BEHAVIOUR IN CASE OF FAST PWM MODE         */
/***********************************************************************************/
#define DISCONNECT_OC0					0
#define NON_INVERTING_OC0				1
#define INVERTING_OC0					2

/***********************************************************************************/
/*         OUTPUT COMPARE PIN (OC0) BEHAVIOUR IN CASE OF PHASE CORRECT MODE        */
/***********************************************************************************/
#define DISCONNECT_OC0					0
#define NON_INVERTING_OC0				1
#define INVERTING_OC0					2

/***********************************************************************************/
/*         						 CLOCK SELECTION        						   */
/***********************************************************************************/
#define NO_CLOCK_SOURCE					0
#define NO_PRESCALER					1
#define PRESCALER_8						2
#define PRESCALER_64					3
#define PRESCALER_256					4
#define PRESCALER_1024					5
#define EXTERNAL_T0_FALLING_EDGE		6
#define EXTERNAL_T0_RISING_EDGE			7

/***********************************************************************************/
/*								TIMER0 RESOLUTION								   */
/***********************************************************************************/
#define RESOLUTION						256

/***********************************************************************************/
/*								TIMER0 RANGES									   */
/***********************************************************************************/
#define MINIMUM_DUTYCYCLE				0
#define MAXIMUM_DUTYCYCLE				100


/************************************************************************************/
/*						  PRIVATE FUNCTIONS PROTOTYPES							    */
/************************************************************************************/
void __vector_10(void) __attribute__((signal));
void __vector_11(void) __attribute__((signal));


#endif /* TIMER0_PRIV_H_ */