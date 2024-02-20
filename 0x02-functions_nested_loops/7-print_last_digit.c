#include "main.h"

/**
 * print_last_digit - prints the last digit of a number and returns it
 * @n: number whose last digit is needed
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int las = n % 10;

	if (las < 0)
	{
		_putchar(-las + '0');
		return (-las);
	}
	_putchar(las + '0');
	return (las);
}
