#include "main.h"

/**
* _strncat - concatenates two strings
*
* @dest: input
*
* @src: input
*
* @n: input
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		if (n > j)
		{
			dest[i] = src[j];
			i++;
		}

	}
	return (dest);
}
