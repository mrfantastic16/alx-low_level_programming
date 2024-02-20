#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets x10 in newlines
 *
 * Return: its a void function :|
 */

void print_alphabet_x10(void)
{
	char al;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
	}
}
