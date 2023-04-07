#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 *	make change for an amount of money where
 *	the coins value consist of 25, 10, 5, 2, and 1 cent
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if the number of arg the program receiver is exactly 1
 *	else 1
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]), coins = 0;

	while (cents > 0)
	{
		coins++;

		if (cents - 25 >= 0)
			cents -= 25;

		else if (cents - 10 >= 0)
			cents -= 10;

		else if (cents - 5 >= 0)
			cents -= 5;

		else if (cents - 2 >= 0)
			cents -= 2;

		else
			cents--;
	}

	printf("%d\n", coins);
	return (0);
}

