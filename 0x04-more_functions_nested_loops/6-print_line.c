#include "main.h"

/**
 * print_line - draws a straight line in
 * the terminal
 *
 * @n: input
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i != 0; i--)
		{
			_putchar('_');
		}
	}
			_putchar('\n');
}
