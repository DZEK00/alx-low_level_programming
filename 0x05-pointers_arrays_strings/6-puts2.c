#include "main.h"

/**
* puts2 - prints every other character
* of a string
*
* @str: input
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;

		if (i % 2 == 0)
			continue;
	}
		_putchar('\n');
}
