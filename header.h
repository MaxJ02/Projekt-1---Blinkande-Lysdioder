#ifndef HEADER_H_
#define HEADER_H_

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

#define LED1 6
#define LED2 7
#define LED3 0
#define BUTTON1 4
#define BUTTON2 5

#define LED1_ON PORTD |= (1 << LED1)
#define LED2_ON PORTD |= (1 << LED2)
#define LED3_ON PORTB |= (1 << LED3)

#define LED1_OFF PORTD &= ~(1 << LED1)
#define LED2_OFF PORTD &= ~(1 << LED2)
#define LED3_OFF PORTB &= ~(1 << LED3)

#define BUTTON1_IS_PRESSED ((PINB & (1 << BUTTON1)) !=0)
#define BUTTON2_IS_PRESSED ((PINB & (1 << BUTTON2)) !=0)
#define BUTTONS_ARE_PRESSED (((PINB & (1 << BUTTON2)) !=0)|((PINB & (1 << BUTTON1)) !=0))

void led_blink_one_by_one_backwards();
void setup(void);
void leds_off();
void leds_on();
void led_blink_one_by_one();

#endif /* HEADER_H_ */