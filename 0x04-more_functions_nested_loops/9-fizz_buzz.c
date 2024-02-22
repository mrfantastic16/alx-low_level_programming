#include <stdio.h>

/**
 * main - fizzbuzz. Prints numbers from 1 - 100 but replaces multilple
 * of 3 with Fizz, 5 with Buzz, 5 & 6 with FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s\n", "Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else if (i % 5 == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", i);
	}

	return (0);
}
