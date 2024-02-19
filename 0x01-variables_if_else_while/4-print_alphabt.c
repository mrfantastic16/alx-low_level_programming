#include <stdio.h>

/**
 * main - prints lowercase ascii exept q and e
 *
 * Return: 0 on succes
 */

int main(void)
{
	char asc;

	for (asc = 'a'; asc <= 'z'; asc++)
	{
		if (!(asc == 'q' || asc == 'e'))
			putchar(asc);
	}
	putchar('\n');

	return (0);
}
