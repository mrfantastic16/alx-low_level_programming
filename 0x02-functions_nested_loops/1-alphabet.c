#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase followed by \n
 *
 * Return: As usual 0 :|
 */

void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
	_putchar('\n');
}
