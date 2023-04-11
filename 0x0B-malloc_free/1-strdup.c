#include "main.h"
#include <stdlib.h>

/**
* _strdup - a function that returns a pointer to a newly
* allocated space in memory, which contains a copy of the
* string given as a parameter
*
* @str: input
*
* Return: a pointer to the duplicated string or
* it returns NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *str2;
	int i, len;

	if (str == 0)
		return (NULL);

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	str2 = malloc((len + 1));

	if (str2 == 0)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		str2[i] = str[i];
	}

	str2[len] = '\0';
	return (str2);
}
