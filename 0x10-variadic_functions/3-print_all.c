#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char
 * @args: arguments pointing to the next char that is to be printed
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: args pointing to next int an int to be printed
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: args pointing to the next float to printed
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print a string
 * @args: args pointing to the next string to be printed
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything, followed by a new line.
 * @format: A string of chars
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	formatSpec_t format_func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4 && (format[i] != format_func[j].sy[0]))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			format_func[j].func(args);
			separator = ", ";
		}
		i++;
	}
	putchar('\n');

	va_end(args);
}
