#include <stdio.h>

/**
 * main - prints numbers till hex values
 *
 * Return: 0
 */

int main(void)
{
	char dg, hex;

	for (dg = 48; dg <= 57; dg++)
		putchar(dg);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');

	return (0);
}
