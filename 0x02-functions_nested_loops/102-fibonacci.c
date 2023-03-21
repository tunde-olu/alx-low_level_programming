#include <stdio.h>


/**
 * main - print the first 100 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			printf("%lu", a);
		}
		else
		{
			printf("%lu, ", a);
			c = a + b;
			a = b;
			b = c;
		}
	}
	printf("\n");
	return (0);

}
