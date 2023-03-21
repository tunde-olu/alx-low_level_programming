#include "main.h"




/**
 * print_alphabet - print lower case alphabeth
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

