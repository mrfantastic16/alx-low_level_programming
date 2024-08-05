#include <stddef.h>

/**
 * int_index - uses a callback
 * @array: array
 * @size: ssize of arr
 * @cmp: callback
 *
 * Return: truthy or falsy val
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || !(*cmp))
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
