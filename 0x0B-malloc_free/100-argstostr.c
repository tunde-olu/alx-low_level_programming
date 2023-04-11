#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the args of a program
 * @ac: argc of the program
 * @av: argv of the program
 * Return: NULL if ac == 0 or av == NULL or
 *	a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	char *result;
	int len = 0, word, letter, i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (word = 0; word < ac; word++)
	{
		for (letter = 0; av[word][letter]; letter++)
		{
			len++;
		}
	}

	len += ac; /* to account for the null char in each word in av */

	result = malloc(sizeof(char) * len);

	if (result == NULL)
		return (NULL);

	for (word = 0; word < ac; word++)
	{
		for (letter = 0; av[word][letter]; letter++)
		{
			result[i] = av[word][letter];
			i++;
		}

		result[i] = '\n';
		i++;
	}

	return (result);
}

