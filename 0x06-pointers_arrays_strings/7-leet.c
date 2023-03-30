/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: encoded str to 1337
 */

char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char encode[] = "4433007711";
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

