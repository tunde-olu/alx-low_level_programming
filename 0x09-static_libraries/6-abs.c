#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to compute to absolute value
 * Return: The absolue number of the argument
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
