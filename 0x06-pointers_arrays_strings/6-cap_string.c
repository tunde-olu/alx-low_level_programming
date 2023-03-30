/**
 * cap_string - capitalize all words of a string
 * @str: string to change
 * Return: capitalize all words in str
 */

char *cap_string(char *str)
{
	int i = 0;
	int is_cap = 1;

	while (str[i] != '\0')
	{
		if (is_cap && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
		str[i] == '?' || str[i] == '"' || str[i] == '(' ||
		str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			is_cap = 1;
		}
		else
		{
			is_cap = 0;
		}

		i++;
	}

	return (str);
}

