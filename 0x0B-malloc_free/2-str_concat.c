#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 * Return: a pointer  which contains the
 *	contents of s1, followed by the
 *	contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, j, s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	{
		s1_len++;
	}
	for (i = 0; s2[i]; i++)
	{
		s2_len++;
	}

	result = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; s2[j]; j++)
	{
		result[i] = s2[j];
		i++;
	}
	result[i + 1] = '\0';
	return (result);
}

