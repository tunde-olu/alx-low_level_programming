/**
 * swap_int - swap the value of two integers
 * @a: the integer to swap with b
 * @b: the integer to swap with a
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

