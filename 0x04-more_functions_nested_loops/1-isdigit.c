#include "main.h"

/**
 * _isdigit - function to check if
 * character is a digit
 *
 * @c: checks input of function
 *
 * Return: returns 1 if c is a digit
 * otherwise always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

