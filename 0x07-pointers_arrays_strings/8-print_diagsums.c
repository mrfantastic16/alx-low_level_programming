#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int pri = 0;
	unsigned int sec = 0;

	for (i = 0; i < size - 1; i++)
	{
		pri += a[i * size + 1];
		sec += a[i * size + (size - i - 1)];
	}

	printf("%u, %u", pri, sec);
}
