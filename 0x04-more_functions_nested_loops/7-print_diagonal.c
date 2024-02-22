#include "main.h"

/**
 * print_diagonal - prints '\' spefied amount of times
 * @n: number of times to print
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j, spaces = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < spaces; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');

			spaces++;
		}
	}
	else
		_putchar('\n');
}
