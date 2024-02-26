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

	for (ln / 2; str[ln] != '\0'; ln++)
		_putchar(str[ln]);
	_putchar('\n');
}
