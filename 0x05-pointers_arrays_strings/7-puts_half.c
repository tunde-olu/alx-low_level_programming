#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string parameter
 * Return: the length of @s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - prints half of a string
 * @str: parameter
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int half;

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;


	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}

