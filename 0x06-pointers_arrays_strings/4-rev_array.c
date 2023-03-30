/**
 * reverse_array - reverses the content of an array of integers
 * @a: int
 * @n: number of the elements of the array
 * Return: a pointer to the resulting string dest
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

