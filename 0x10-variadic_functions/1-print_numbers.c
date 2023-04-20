#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - a function that prints numbers, followed by a new line
*
* @separator: input
* @n: number of args
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int printed_nums;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printed_nums = va_arg(list, int);
		printf("%d", printed_nums);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(list);

	printf("\n");
}
