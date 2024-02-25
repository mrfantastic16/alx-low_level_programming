#include "main.h"

/**
 * _strlen - returns length of a str
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

/**
 * puts_half - prints half of a str to stdout
 * @str: str whose halfed version is needed
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int ln = _strlen(str);
	int n, i;

	if (ln % 2 == 0)
		n = ln / 2;
	else
		n = (ln - 1) / 2;

	for (i = n; i <= ln; i++)
		_putchar(str[i]);
	_putchar('\n');
}
