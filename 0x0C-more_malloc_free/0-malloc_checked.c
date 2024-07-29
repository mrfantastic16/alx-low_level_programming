#include <stdlib.h>

/**
 * malloc_checked - alloctes and returns a void memory
 * @b: sizeof of memory to allocate
 *
 * Return: memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
