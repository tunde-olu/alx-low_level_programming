#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: elements number
 * @size: sizeof each element
 * Return: If nmemb or size is 0, then _calloc returns NULL
 *	If malloc fails, then _calloc returns NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	char *result_def;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	result_def = result;

	for (i = 0; i < (nmemb * size); i++)
		result_def[i] = 0;

	return (result);
}

