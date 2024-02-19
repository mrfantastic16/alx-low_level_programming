#include <stdio.h>

/**
 * main - prints the alphabets in lowercase followed by newline
 *
 * Return: 0(Success)
 */

int main(void)
{
	char ascii;

	for (ascii = 'a'; ascii <= 'z'; ascii++)
		putchar(ascii);
	putchar('\n');

	return (0);
}
