#include "main.h"

/**
 * print_alphabet - uses _putchar function
 * 		    to print the alphabet
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 0; alpha < 26; alpha++)
	{
		_putchar(97 + alpha);
	}
		_putchar('\n');
}

