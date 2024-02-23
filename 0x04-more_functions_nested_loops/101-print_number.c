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

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / power_10 >= 10)
		power_10 *= 10;
	while (power_10 > 0)
	{
		digit = n / power_10;
		_putchar(digit + '0');

		n = n - digit * power_10;
		power_10 = power_10 / 10;
	}
}
