#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid prev created.
 * @grid: pointer previously created
 * @height: row of the pointer
 */


void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
		free(grid[r]); /**freeing height*/
	free(grid);
	/**freeing all indexes on grid*/
}
