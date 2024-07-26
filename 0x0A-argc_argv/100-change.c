#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns minimal number of coins to exchange for input cents
 * @argc: arg count
 * @argv: cennt
 *
 * Return: cent
 */

int main(int argc, char **argv)
{
	int cents[] = {25, 10, 5, 2, 1};
	int re_cent;
	int coins = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	re_cent = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (re_cent >= cents[i])
		{
			coins += 1;
			re_cent -= cents[i];
		}
	}

	printf("%d\n", coins);
	return (0);
}
