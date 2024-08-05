#include <stddef.h>

/**
 * array_iterator - iterator calls a callback function to print
 * in a specified format
 * @array: array to be printed
 * @size: array size
 * @action: callback function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (*action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
