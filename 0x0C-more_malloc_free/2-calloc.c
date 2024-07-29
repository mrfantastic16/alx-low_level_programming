#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size or type of members
 *
 * Return: memory allocation of array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (!nmemb || !size)
		return (malloc(0));

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
