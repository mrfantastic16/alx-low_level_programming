#include "main.h"
#include <stdio.h>

/**
 * main - prints number of cmd args received
 * @argc: receives the arg counts
 * @argv: arguments packaged into array
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
