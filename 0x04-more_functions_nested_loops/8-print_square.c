#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 */

void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			int hash;

			for (hash = 0; hash < size; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

