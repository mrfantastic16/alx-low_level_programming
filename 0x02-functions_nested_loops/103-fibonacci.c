#include <stdio.h>

/**
 * main - prints valued fibonaaci numbers that does not exceed 4,000,000,
 *
 * Return: Success, 0
 */

int main(void)
{
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long c;
	unsigned long sum;

	while (b < 4000000)
	{
		c = b + a;

		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}

	printf("%ld\n", sum);

	return (0);
}
