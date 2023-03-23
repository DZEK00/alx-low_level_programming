#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int column, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (column = 1; column <= n; column++)
		{
			for (i = 1; i <= column; i++)
			{
				if (i == column)
					_putchar(92);
				else if (i < column)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
