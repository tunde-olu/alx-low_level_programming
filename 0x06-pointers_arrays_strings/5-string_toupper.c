/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @str: string to change
 * Return: uppercase of str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}

		i++;
	}

	return (str);
}

