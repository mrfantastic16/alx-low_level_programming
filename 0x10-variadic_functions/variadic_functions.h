#ifndef VAR_H
#define VAR_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct formatSpec - new type bundled with the symbol and a function pointer
 * which would be used to call the function corresponding to symbol
 *
 * @sy: symbol
 * @func: function pointer to actuall function correspponding
 * to @sy
 */
typedef struct formatSpec
{
	char *sy;
	void (*func)(va_list args);
} formatSpec_t;

#endif
