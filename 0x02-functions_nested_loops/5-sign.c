#include "main.h"

/**
 * print_sign - prints the  sign of the parameter and returns
 * 1 or 0 or -1
 * @n: parameter which sign would be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
