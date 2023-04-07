#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if program receives two arguments else 1
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

