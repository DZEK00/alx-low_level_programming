#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* create_array -  a function that creates an array of chars,
* and initializes it with a specific char.
*
* @size: input
* @c: input
*
* Return: Result
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *) malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	free(ptr);
	return (ptr);
}
