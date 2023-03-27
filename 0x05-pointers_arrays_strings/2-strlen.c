#include "main.h"

/**
* _strlen - calculates the length of a string
*
* @s: input
*
* Return: length of the string
*/

int _strlen(char *s)
{
	int length = 0;

	while (length != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
