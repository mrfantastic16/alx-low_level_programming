#include <stdio.h>

/**
 * main - prints double combination of single-digits ints
 *
 * Return: 0(success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (!(i == 56 && j== 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
