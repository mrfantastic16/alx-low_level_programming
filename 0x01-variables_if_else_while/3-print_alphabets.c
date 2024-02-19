#include <stdio.h>

/**
 * main - prints lowercase ascii, then uppercase ascii characters
 *
 * Return: 0(success)
 */

int main(void)
{
	char lo_char, up_char;

	for (lo_char = 'a'; lo_char <= 'z'; lo_char++)
		putchar(lo_char);
	for (up_char = 'A'; up_char <= 'Z'; up_char++)
		putchar(up_char);
	putchar('\n');

	return (0);
}
