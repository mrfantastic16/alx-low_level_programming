#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string whose length is needed
 * Return: len of str
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;

	return (i);
}

/**
 * print_rev - prints a string in reverse
 * @s: string that needs to be printed in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int ls = _strlen(s) - 1;
	int i;

	for (i = ls; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
