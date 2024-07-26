#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the mul of two number args received from argv
 * @argc: args count
 * @argv: array of number to be multilplied
 *
 * Return: 1 if argc != 3, 0 if all is well
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
