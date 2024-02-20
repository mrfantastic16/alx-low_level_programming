#include "main.h"

/**
 * _islower - returns 1 if a char is lowercase ascii else 0
 * @c: characeter to be checked
 *
 * Return: 1(c is lowercase), 0(c is not lowercase)
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
