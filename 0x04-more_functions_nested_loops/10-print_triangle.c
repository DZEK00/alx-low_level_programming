#include "main.h"

/**
 * print_triangle - prints a triangle in
 * the terminal
 *
 * @size: input
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((i + j) < size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
}

