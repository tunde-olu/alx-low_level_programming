#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: starting point
 * Return: void
 */

void print_to_98(int n)
{
	int i, j;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				return;
			}
			printf("%d, ", i);
		}
	}
	else if (n < 98)
	{
		for (j = n; j <= 98; j++)
		{
			if (j == 98)
			{
				printf("%d\n", j);
				return;
			}
			printf("%d, ", j);
		}
	}
	else
	{
		printf("%d\n", n);
	}
}

