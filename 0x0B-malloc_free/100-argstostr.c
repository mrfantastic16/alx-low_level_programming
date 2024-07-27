#include "main.h"
#include <stdlib.h>

char *argstostr_helper(char *buffer, int ac,  char **av);

/**
 * argstostr - converts args to a string
 * @ac: args count
 * @av: args
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int l = 0;
	char *new_str;

	if (ac <= 0 && !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}

	new_str = malloc(l + ac + 1);
	if (!new_str)
		return (NULL);

	return (argstostr_helper(new_str, ac, av));
}

/**
 * argstostr_helper - argstostr helper
 * @buffer: bufeferr bufer
 * @ac: arg count
 * @av: args
 *
 * Return: string
 */
char *argstostr_helper(char *buffer, int ac,  char **av)
{
	int i, j;
	char *ac_buffer = buffer;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			*buffer = av[i][j];
			buffer++;
		}
		*buffer = '\n';
		buffer++;
	}
	*buffer = '\0';

	return (ac_buffer);
}
