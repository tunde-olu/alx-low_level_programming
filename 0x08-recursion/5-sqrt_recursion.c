#include "main.h"

/**
 * check_root - checks if num is the square root of base
 * @num: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 */
int check_root(int num, int base)
{
	if (num * num == base)
		return (num);
	if (num * num > base)
		return (-1);
	return (check_root(num + 1, base));
}

/**
 * _sqrt_recursion - return the natural square root of a number n
 * @n: int
 * Return: the natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	return (check_root(0, n));
}

