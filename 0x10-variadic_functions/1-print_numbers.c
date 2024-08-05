#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separator of the nums
 * @n: length of the array
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (!(*separator))
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i == n - 1)
			putchar('\n');
		else
			printf("%s", separator);
	}
}
