#include <stdio.h>

/**
 * main - prints ascii lowercase in reverse order
 *
 * Return: on success, 0
 */

int main(void)
{
	char asc;

	for (asc = 'z'; asc >= 'a'; asc--)
		putchar(asc);
	putchar('\n');

	return (0);
}
