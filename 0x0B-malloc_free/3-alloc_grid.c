#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first integer
 * @height: second integer
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid  = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);

			free(grid);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
		{
			grid[k][j] = 0;
		}
	}
	return (grid);
}




