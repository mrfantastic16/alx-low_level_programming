#include <stddef.h>
#include "main.h"

/**
 * _strstr - returns an ocuurance of @needle in @haystack
 * @haystack: string to be searched
 * @needle: string to find
 *
 * Return: pointer to needle if it is found else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;


	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
			return (&(haystack[i]));
	}
	return (NULL);
}
