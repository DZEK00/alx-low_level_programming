#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int column, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (column = 1; column <= n; column++)
		{
			for (space = 1; space <= column; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
