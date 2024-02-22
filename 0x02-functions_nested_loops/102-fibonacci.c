#include <stdio.h>

/**
 * main - prints the fibonacci from 1 till 50
 *
 * Return: 0
 */

int main(void)
{
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long sum = 0;
	int counter = 0;

	while (counter < 50)
	{
		sum = fib1 + fib2;
		if (counter == 49)
			printf("%lu\n", sum);
		else
			printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;

		counter++;
	}

	return (0);
}
