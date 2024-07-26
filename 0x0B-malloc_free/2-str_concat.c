#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and return them
 * @s1: str 1 to be concatenated
 * @s2: str 2 to be concatensted
 *
 * Return: @str1 + str2
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j;

	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";

	for (i = 0; s1[i]; i++)
		continue;
	for (j = 0; s2[j]; j++)
		continue;

	new_str = malloc(sizeof(char) * (i + j) + 1);
	if (!new_str)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[i] = s1[i];
	for (j = 0; s2[j]; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';
	return (new_str);
}
