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
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
