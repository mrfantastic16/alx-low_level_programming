#include <string.h>

/**
 * _strchr - returns the address of a specified char it has to find
 * in a string
 * @s: string to be searched
 * @c: char to find in the string
 *
 * Return: a pointer of c if found else NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;


	for (i = 0; i < strlen(s); i++)
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	return (NULL);
}
