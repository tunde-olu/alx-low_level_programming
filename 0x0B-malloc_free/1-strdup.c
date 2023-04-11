#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer
 *	to a new string which is a
 *	duplicate of the string str
 * @str: string
 * Return: NULL if str = NULL or
 *	if insufficient memory was available.
 *	On success, returns a pointer
 *	to the duplicated string
 *
*/

char *_strdup(char *str)
{
	char *result;
	int i, str_len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		str_len++;
	}

	result = malloc(sizeof(char) * (str_len + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < str_len; i++)
	{
		result[i] = str[i];
	}

	result[i] = '\0';

	return (result);
}

