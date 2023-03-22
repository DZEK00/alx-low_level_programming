#include "main.h"

/**
 * times_table - function that prints the 9 times
 * table, starting with 0
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			x = i * j;
			
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
			{
				_putchar(x + '0');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
