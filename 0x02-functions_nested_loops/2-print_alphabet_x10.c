#include "main.h"

/**
 * print_alphabet_x10 - uses _putchar function to
 * print the alphabet x10
 */

void print_alphabet_x10(void)
{
	int alpha;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (alpha = 0; alpha < 26; alpha++)
		{
			_putchar(97 + alpha);
		}
			_putchar('\n');
	}
}
