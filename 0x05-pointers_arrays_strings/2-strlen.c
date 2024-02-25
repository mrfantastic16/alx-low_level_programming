/**
 * _strlen - returns the length of a string
 * @s: string whose length is needed
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
