#include <stdio.h>

/**
 * main - putchars single digits numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
