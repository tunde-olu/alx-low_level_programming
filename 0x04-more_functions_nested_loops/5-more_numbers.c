#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				k = j;
			}
			else
			{
				k = j / 10;
			}

			_putchar('0' + k);

			if (j < 10)
				continue;

			_putchar('0' + j % 10);
		}
		j = 0;
		_putchar('\n');
	}
}

