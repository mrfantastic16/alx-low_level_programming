#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: void
 */

int main(void)
{
	long int N = 612852475143;
	long int i = 2;
	long int max_p = -1;

	while (i * i <= N)
	{
		while (N % i == 0)
		{
			max_p = i;
			N = N / i;
		}
		i++;
	}
	if (N > 1 && N > max_p)
		max_p = N;

	printf("%ld\n", max_p);

	return (0);
}
