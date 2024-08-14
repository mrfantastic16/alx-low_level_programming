#include <stdio.h>

/**
 * print_first - runs b4 main
 */
void __attribute__ ((constructor)) print_first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
