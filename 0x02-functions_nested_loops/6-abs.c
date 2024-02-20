#include "main.h"

/**
 * _abs - returns the absolute value of an int
 * @n: number whose absolute value would be returned
 *
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
