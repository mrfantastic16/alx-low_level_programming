#include <stdlib.h>

int _strlen(char *str);
/**
 * _strlen - returns the length of a string
 * @str: string
 *
 * Return: lenght of @str
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		continue;

	return (i);
}

/**
 * string_nconcat - concatenates @str1 to @str2 till n or str1 to str2
 * if n is greater str2.
 *
 * @s1: string one of which of all chars would be in the new string
 * @s2: string two of which n chars is going to be copied to new string
 * if n is greater len str2 else str2
 * @n: number of strings to be copied from str2
 *
 * Return: @s1 + @s2[till n] OR @s1 + @s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1;
	unsigned int len_s2;
	char *string;
	unsigned int i;

	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	n = n > len_s2 ? len_s2 : n;
	string = malloc((sizeof(char) * len_s1) + (sizeof(char) * n) + 1);

	if (!string)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		string[i] = s1[i];
	for (i = 0; i < n; i++)
		string[i + len_s1] = s2[i];
	string[len_s1 + n] = '\0';

	return (string);
}
