#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocates memory of size @size for an array of chars
 * fills it up with @c and return the array
 *
 * @size: size of memory to be allocated
 * @c: char to fill the array/memory with
 *
 * Return: array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = malloc(sizeof(char) * size);

	if (arr == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
