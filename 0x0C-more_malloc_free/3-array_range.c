#include <stdlib.h>

nt *array_range(int min, int max)
{
	int *a_int;

	if (min > max)
		return (NULL);

	a_int = malloc(sizeof(int) * (max - min) + 1);
	if (!a_int)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
