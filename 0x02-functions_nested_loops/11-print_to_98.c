#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural
 * numbers from n to 98
 *
 * @n: Takes an integer type as inptut
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	const int x = 98;
	int y;

	for (y = n; y <= x; y++)
	{
		if (y == x)
		{
			printf("%d \n", y);
		}
		else
		{
			printf("%d, ", y);
		}
	}
	for (y = n; y >= x; y--)
	{
		if (y == x)
		{
			printf("%d \n", y);
		}
		else
		{
			printf("%d, ", y);
		}
	}
}
