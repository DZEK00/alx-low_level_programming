#include "main.h"

/**
* _pow_recursion - a function that returns the value of
* x raised to the power of y
*
* @x: input
* @y: input
*
* Return: x raised to the power of y
*/

int _pow_recursion(int x, int y)
{
	int even;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
