#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, hash;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{

		for (hash = 1; hash <= size; hash++)
		{
			int limit = size - i;

			if (hash < limit)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

