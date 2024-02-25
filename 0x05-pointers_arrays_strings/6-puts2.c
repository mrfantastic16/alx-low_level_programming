#include "main.h"

/**
 * puts2 - prints every other chars to stdout
 * @str: str whose everythoer chars needs to be printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
