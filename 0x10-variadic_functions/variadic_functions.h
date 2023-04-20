#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#include <stdarg.h>

/**
 * struct printer - A struct
 *
 * @symbol: symbol of the data type
 * @print_func: a function pointer that prints
 * a data type according to the symbol
*/

typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;

#endif
