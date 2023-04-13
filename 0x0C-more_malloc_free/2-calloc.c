#include "main.h"
#include <stdlib.h>

/**
* _memset - a function that fills memory with a constant byte.
*
* @s: input
* @b: input
* @n: input
*
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}

/**
* _calloc - a function that allocates memory for an array, using malloc
*
* @nmemb: input
* @size: input
*
* Return: Nothing
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int size2;

	if (nmemb == 0 || size == 0)
		return (NULL);

	size2 = nmemb * size;

	arr = malloc(size2);

	if (arr != NULL)
		_memset(arr, 0, size2);
	else
		return (NULL);

	return (arr);
}
