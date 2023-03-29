#include "main.h"

/**
* string_toupper - changes all lowercase characters
* of a string to uppercase
*
* @str: input
*
* Return: a char
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
