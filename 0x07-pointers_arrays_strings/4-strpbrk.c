#include "main.h"
#include <stddef.h>

/**
* _strpbrk - a function that searches a string for any of a set of bytes
*
* @s: input
* @accept: input
*
* Return: s+1 if accept is found and NULL if it's not
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
	while (accept[j] != '\0')
	{
		if (s[i] == accept[j])
		{
			return (s + i);
		}
		j++;
	}
	i++;
	}
	return (NULL);
}
