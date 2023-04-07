#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/**
 * is_num - check if all the char in @num is a digit
 * @num: arg to check
 * Return: 0 if @num is not a number else 1
*/
bool is_num(char *num)
{
	int i;

	for (i = 0; num[i]; i++)
	{
		if (!(num[i] >= '0' && num[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if all the arguments the program receives
 *	are all number else 1
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}

