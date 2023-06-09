#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: the pointer to the newly created array
 *	If min > max, return NULL
 *	If malloc fails, return NULL
*/

int *array_range(int min, int max)
{
	int *result, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	result = malloc(sizeof(int) * size);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		result[i] = min++;
	}

	return (result);
}

