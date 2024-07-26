#include "main.h"
#include <stdlib.h>

int _strlen(char *str);

/**
 * _strdup - returns duplicates of an input string
 * @str: string whose duplicate is needed
 * Return: a pointer to str
 */

char *_strdup(char *str)
{
	int i, l;
	char *cstr = malloc(_strlen(str) + 1);

	if (str == NULL || cstr == NULL)
		return (NULL);
	for (i = 0, l = _strlen(str) + 1; i < l; i++)
	{
		cstr[i] = str[i];
	}

	return (cstr);
}

/**
 * _strlen -returns the length of a given string
 * @str: str whose length is needed
 * Return: length of str
 */
int _strlen(char *str)
{
	int len = 0;
	int i;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	return (len);
}
