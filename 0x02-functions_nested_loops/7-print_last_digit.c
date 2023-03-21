#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n % 10);
	}
	else if (n > 0)
	{
		n = n % 10;
	}
	else
	{
		n = 0;
	}
	_putchar(n + '0');
	return (n);
}
