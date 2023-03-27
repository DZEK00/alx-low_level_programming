#include "main.h"

/**
* rev_string - reverses a string
*
* @s: input
*/

void rev_string(char *s)
{
	int i = 0;
	char *start;
	char *end;
	char temp;


	while (s[i] != '\0')
	{
		i++;
	}

	start = s;
	end = s + i - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
