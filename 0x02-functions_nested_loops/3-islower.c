#include "main.h"

/**
 *  _islower - This function checks for lowercase character
 * member 'c' - the character to check
 * return - 0 or 1
 */ 

int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
