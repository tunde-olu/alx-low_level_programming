#include <stdio.h>


/**
 * main - print the first 100 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter = 50;
	long a = 1;
	long b = 2;
	long c;

	for (int i = 0; i < 50; i++)
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
