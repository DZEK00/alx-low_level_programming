#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - a function that prints strings, followed by a new line
*
* @separator: input
* @n: number of args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *printed_str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printed_str = va_arg(list, char *);

		if (printed_str == NULL)
			printf("(nil)");
		else
			printf("%s", printed_str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(list);

	printf("\n");
}
			
