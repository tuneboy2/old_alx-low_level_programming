#include "main.h"
#include <stdlib.h>

/**
* free_grid - A function that frees a 2 dimensional array.
* @grid: The array to be freed
* @height: The height of the array
*
* Return: Void
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);

		free(grid);
	}
}
