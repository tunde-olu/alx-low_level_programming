#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check its length
 * Return: the length of s
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = 1;
		return (length + _strlen_recursion(s + 1));
	}


	return (length);
}

