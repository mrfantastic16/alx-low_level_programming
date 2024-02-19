#include <stdio.h>

/**
 * main - print single-digits numbers in threes
 *
 * Return: 0(success)
 */

int main(void)
{
	int fn, sn, tn;

	for (fn = 48; fn <= 57; fn++)
	{
		for (sn = fn + 1; sn <= 57; sn++)
		{
			for (tn = sn + 1; tn <= 57; tn++)
			{
				putchar(fn);
				putchar(sn);
				putchar(tn);

				if (!(fn == 55 && sn == 56 && tn == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
