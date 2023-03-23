#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to draw diagonal line
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int space;

			for (space = 0; space < i; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}

