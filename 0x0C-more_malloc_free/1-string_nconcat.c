#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calc the length of a string
 * @s: string
 * Return: the length of @s
*/

unsigned int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}

	return (len);
}


/**
 * string_nconcat - concatenates two strings
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 * @n: number of bytes to allocate from s2
 * Return: a pointer that point to a
 *	newly allocated space in memory, which
 *	contains s1, followed by the first n
 *	bytes of s2, and null terminated.
 *	If the function fails, it should return NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{	
	unsigned int n_len, s1_len, s2_len, i, j;	
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n >= s2_len)
		n_len = s2_len;
	else
		n_len = n;

	result = malloc((sizeof(char) * (s1_len + n_len + 1)));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];

	for (j = 0; j < n_len; j++)
		result[i + j] = s2[j];

	result[i + j + 1] = '\0';

	return (result);
}

