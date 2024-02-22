#include <stdio.h>

/**
 * main - print sum of multilple of 3 0r 5 below 1024
 * Return: As always, 0
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || 1 % 5 == 0)
			sum += i;
	printf("%d\n", sum);

	return (0);
}
