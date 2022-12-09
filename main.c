#include "header.h"

int main()
{
	setup();

	while (1)
	{
		if (BUTTON1_IS_PRESSED)
		{
			led_blink_one_by_one(100);
		}
		else
		{
			leds_off(100);
		}

		if (BUTTON2_IS_PRESSED)
		{
			led_blink_one_by_one_backwards(100);
		}
		else
		{
			leds_off(100);
		}

		if(BUTTONS_ARE_PRESSED)
		{
			leds_on(100);
		}

	}
	
	return 0;
}
