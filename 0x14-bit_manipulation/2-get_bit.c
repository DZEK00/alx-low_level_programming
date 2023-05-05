#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: input
 * @index: input
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	mask <<= index;
	return (n & mask) != 0;
}

