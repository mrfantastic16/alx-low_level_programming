#include <stdlib.h>

int *array_range(int min, int max)
{
	int *a_int;
	int i;

	if (min > max)
		return (NULL);

	a_int = malloc(sizeof(int) * (max - min) + 1);
	if (!a_int)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		a_int[i] = min;

	return (a_int);
}
