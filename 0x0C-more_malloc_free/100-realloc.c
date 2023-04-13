#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously
 *	allocated with a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: If new_size == old_size do not do anything and return ptr.
 *	If ptr is NULL, then the call is equivalent to malloc(new_size),
 *	for all values of old_size and new_size.
 *	If new_size is equal to zero, and ptr is not NULL,
 *	then the call is equivalent to free(ptr). Return NULL.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;
	unsigned int i;
	char *_result;
	char *_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		result = malloc(new_size);
		if (result == NULL)
			return (NULL);
		return (result);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	result = malloc(new_size);

	_result = result;
	_ptr = ptr;

	if (result == NULL)
		return (NULL);

	for (i = 0; (i < old_size) && (i < new_size); i++)
		_result[i] = _ptr[i];
	free(ptr);

	return (result);
}

