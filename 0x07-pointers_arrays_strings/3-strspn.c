#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring
*
* @s: input
* @accept: input
*
* Return: c
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	char *p1 = s;
	char *p2;

	while (*p1 != '\0')
	{
		p2 = accept;
	while (*p2 != '\0')
	{
		if (*p1 == *p2)
		{
		c++;
		break;
		}
		p2++;
	}
		if (*p2 == '\0')
		{
		break;
		}
		p1++;
	}
	return (c);
}
