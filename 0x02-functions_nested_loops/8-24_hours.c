#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Description: starting from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
		}
		min = 0;
	}
}
