#include "main.h"

/**
 * _strlen - compares two strings
 * @s: string parameter
 * Return: int
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
 * _strcmp - appends the src string to the dest string
 * @s1: string
 * @s2: string
 * Return: a pointer to the resulting string dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int cmp = 0;
	int s1_len = _strlen(s1);
	int s2_len = _strlen(s2);

	for (i = 0; i < s1_len || i < s2_len; i++)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
		}
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			break;
		}
	}

	return (cmp);
}

