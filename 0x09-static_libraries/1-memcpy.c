#include "main.h"

/**
* _memcpy - a function that copies memory area
*
* @dest: input
* @src: input
* @n: input
*
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}
