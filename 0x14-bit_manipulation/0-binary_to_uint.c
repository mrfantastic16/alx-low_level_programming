#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res = (res << 1) | (b[i] - '0');
	}

	return (res);
}
