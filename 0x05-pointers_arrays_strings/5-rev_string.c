#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: string parameter
 * Return: length
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
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int last = _strlen(s) - 1;
	int first = 0;

	while (first < last)
	{
		char temp = s[first];

		s[first] = s[last];
		s[last] = temp;
		first++;
		last--;
	}
}

