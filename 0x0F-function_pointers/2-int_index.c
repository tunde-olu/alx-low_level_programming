#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: Array to iterate and check callback fn against
 * @size: @array length
 * @cmp: callback function
 * Return: The index of the first element for
 *	which the cmp function does not return 0.
 *	If no element matches, return -1
 *	If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int f;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		f = cmp(array[i]);
		if (f != 0)
		{
			return (i);
		}
	}

	return (-1);
}
