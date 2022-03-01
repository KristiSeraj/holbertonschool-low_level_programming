#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: the height grid
 */
void free_grid(int **grid, int height)
{
	int row;

	row = 0;
	while (row < height)
	{
		free(grid[row]);
		row++;
	}

	free(grid);
}
