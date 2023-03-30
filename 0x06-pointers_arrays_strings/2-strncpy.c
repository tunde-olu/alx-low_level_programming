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
 * _strncpy - appends the src string to the dest string
 * @dest: string
 * @src: string
 * @n: byte(s)
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

