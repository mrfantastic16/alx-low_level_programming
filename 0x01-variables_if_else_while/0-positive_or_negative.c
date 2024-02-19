#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - checks if generated number is positive or negative
 * Return: on success, 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zer0\n", n);

	return (0);
}
