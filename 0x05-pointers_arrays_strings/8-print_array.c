#include <stdio.h>

/**
 * print_array - prints specified number of arrays
 * @a: array to be printed
 * @n: spefied number
 *
 * Return: Nothing!
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
