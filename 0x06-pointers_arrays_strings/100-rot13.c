#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: encoded str to rot13
 */

char *rot13(char *str)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encode[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = encode[j];
				break;
			}
		}
	}

	return (str);
}

