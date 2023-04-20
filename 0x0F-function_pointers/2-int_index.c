#include "function_pointers.h"

/**
* int_index - a function that searches for an integer.
*
* @array: input
* @size: input
* @cmp: function pointer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}