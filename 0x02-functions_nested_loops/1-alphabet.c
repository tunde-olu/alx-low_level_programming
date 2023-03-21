#include "main.h"




/**
 * print_alphabeth - print lower case alphabeth
 * Return: Always 0
 */

void print_alphabeth(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

