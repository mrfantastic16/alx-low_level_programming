/**
 * _strlen - returns length of a str
 * @s: atring whose length is required
 *
 * Return: length of @s
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * rev_string - reverses the position of a string in memory
 * @s: str that needs to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int ls = _strlen(s) - 1;
	int i;
	char temp;

	for (i = 0; i <= ls; i++)
	{
		temp = s[i];
		s[i] = s[ls];
		s[ls] = temp;
		ls--;
	}
}
