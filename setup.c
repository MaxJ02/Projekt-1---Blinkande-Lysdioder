#include "header.h"

void setup(void)
{
	DDRD = (1 << LED1) | (1 << LED2);
	DDRB = (1<<LED3);
	return;
}

void leds_off ()
{
	LED1_OFF;
	LED2_OFF;
	LED3_OFF;

	return;
}

void leds_on ()
{
	LED1_ON;
	LED2_ON;
	LED3_ON;

	return;
}

void led_blink_one_by_one()
{
	LED1_ON;
	LED2_OFF;
	LED3_OFF;
	_delay_ms(100);

	LED1_OFF;
	LED2_ON;
	LED3_OFF;
	_delay_ms(100);

	LED1_OFF;
	LED2_OFF;
	LED3_ON;
	_delay_ms(100);
}

void led_blink_one_by_one_backwards()
{
	LED1_OFF;
	LED2_OFF;
	LED3_ON;
	_delay_ms(100);

	LED1_OFF;
	LED2_ON;
	LED3_OFF;
	_delay_ms(100);

	LED1_ON;
	LED2_OFF;
	LED3_OFF;
	_delay_ms(100);
}