#include "main.h"
#include <stdio.h>

/**
 * main - prints args to the terminal
 * @argc: arg counts
 * @argv: arg vector
 *
 * Return: Always 1
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
