#include "main.h"

/**
* puts_half - prints half of a string
*
* @str: input
*/

void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (i >= len / 2)
			_putchar(str[i]);
	}
		_putchar('\n');
}
