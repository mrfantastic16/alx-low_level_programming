#include <stdio.h>
#include "main.h"

/**
 * print_number - prints numbers
 * @n: number
 */

void print_number(int n)
{
	int power_10 = 1;
	int digit;
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	while (n1 / power_10 >= 10)
		power_10 *= 10;
	while (power_10 > 0)
	{
		digit = n1 / power_10;
		_putchar(digit + '0');

		n1 = n1 - digit * power_10;
		power_10 = power_10 / 10;
	}
}
