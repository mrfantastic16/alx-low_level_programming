#include "main.h"

/**
 * print_most_numbers - prints single digits except 2, 4
 * Return: void
 */

void print_most_numbers(void)
{
	int ch = 48;

	for (; ch <= 57; ch++)
	{
		if (!(ch == 50 || ch == 52))
			_putchar(ch);
	}
	_putchar('\n');
}
