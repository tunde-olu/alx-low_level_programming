#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) Success
*/

int main(int argc, char __attribute((__unused__)) * argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

