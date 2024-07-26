#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: arguments counts from the command line
 * @argv: arguement received as strings from the command line.
 *
 * Return: Always 1
 */

int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
