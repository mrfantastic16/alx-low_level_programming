#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to printed between strings.
 * @n: The number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
