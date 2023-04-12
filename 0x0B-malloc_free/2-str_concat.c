#include "main.h"
#include <stdlib.h>

/**
* str_concat -  a function that concatenates two strings
*
* @s1: input
* @s2: input
*
* Return: Result on success and NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *new_s;
	int i, j, len1, len2;

	len1 = 0;
	len2 = 0;

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

	new_s = malloc((len1 + len2 + 1));

	if (new_s == 0)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		new_s[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		new_s[len1 + j] = s2[j];
	}

	new_s[len1 + len2] = '\0';

	return (new_s);
}
