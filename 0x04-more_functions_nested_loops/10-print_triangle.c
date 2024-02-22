#include "main.h"

/**
 * print_triangle - prints triangle of given height
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int sp = size - 1;
	int hs = 1;
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < sp; j++)
				_putchar(' ');
			for (j = 0; j < hs; j++)
				_putchar('#');
			_putchar('\n');

			sp--;
			hs++;
		}
	}
	else
		_putchar('\n');
}
