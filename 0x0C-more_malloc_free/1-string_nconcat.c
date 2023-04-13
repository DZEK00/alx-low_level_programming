#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - a function that concatenates two strings
*
* @s1: input
* @s2: input
* @n: input
*
* Return: new_str
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *new_str;

	len1 = len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	new_str = malloc(len1 + 1 + n);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		if (j < n)
		{
			new_str[i] = s2[j];
			i++;
		}
	}

	new_str[i] = '\0';

	return (new_str);
}
