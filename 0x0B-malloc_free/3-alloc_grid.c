#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - a function that returns a pointer
* to a 2 dimensional array of integers
*
* @width: input
* @height: input
*
* Return: Result on success and NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
