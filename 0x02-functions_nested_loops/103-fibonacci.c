#include <stdio.h>


/**
 * main - Fibonacci sequence whose
 * values do not exceed 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	long d = 0;

	while (a <= 4000000)
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
