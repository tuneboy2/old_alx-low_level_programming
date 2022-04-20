#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - A function that returns a pointer to
* a 2 dimensional array of integers.
* @height: The number of rows in the array.
* @width: The number of columns in the array
*
* Return: A pointer to a two dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (height < 0 || width < 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);

			free(grid);
			break;
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
return (grid);
}

