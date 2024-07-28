#include "main.h"
#include <stdlib.h>

char **strtow(char *str)
{
	char **words_ar;
	int words = num_words(str);
	int i;

	words_arr = malloc(sizeof(char *) * words);
	if (!words_arr)
		return (NULL);

	for (i = 0; str[i]; i++)
	{

	}
}

int num_words(char *str)
{
	int count = 0, i;
	int in_word = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && in_word == 0)
			in_word = 1;
		else if (str[i] == ' ' && in_word == 1)
		{
			count++;
			in_word = 0;
		}
	}
	if (in_word == 1):
		count++;
	return (count);
}

int let_word(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		continue;
	return (i);
}
