#include "main.h"

/**
 * _strcmp - appends the src string to the dest string
 * @s1: string
 * @s2: string
 * Return: a pointer to the resulting string dest
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

