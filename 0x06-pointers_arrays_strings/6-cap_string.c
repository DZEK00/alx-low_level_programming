#include "main.h"

/**
* cap_string - capitalizes each word of a string
*
* @str: input
*
* Return: str
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			if (str[i - 1] == ' ' || str[i - 1] == ',' || str[i - 1] == ';' ||
			str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
			str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == '\t' ||
			str[i - 1] == '\n')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
