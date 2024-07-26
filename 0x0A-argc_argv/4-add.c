#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of all cmd args
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 1 if invalid argv item is encountered, 0 if no args at all
 * and sum if all goes as planned
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
