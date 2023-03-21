#include <stdio.h>


/**
 * main - Fibonacci sequence whose
 * values do not exceed 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	int counter = 50;
	long a = 1;
	long b = 2;
	long c;
	long d = 0;

	for (int i = 0; a <= 4000000; i++)
	{
		c = a + b;
		a = b;
		b = a;
		if (a % 2 == 0)
		{
			d = d + a;
		}
	}
	printf("%lu\n", d);
	return (0);
}
