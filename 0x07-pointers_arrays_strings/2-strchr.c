#include "main.h"

/**
* _strchr - a function that locates a character in a string
*
* @s: input
* @c: input
*
* Return: s if s==c and NULL if c is not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (s);
}
