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
	long c = 0;
	long d = 0;
	int i;

	for (i = 0; a <= 4000000; i++)
	{
		c = a + b;
		a = b;
		b = a;
		if ((c <= 4000000) && (a % 2 == 0))
		{
			d = d + a;
		}
	}
	printf("%lu\n", d);
	return (0);
}
