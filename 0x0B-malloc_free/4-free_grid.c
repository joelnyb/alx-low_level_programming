#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free heap memory
 * @grid: takes the grid
 * @height: takes the height
 * Return: the address
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)

		free(grid[i]);
	free(grid);
}
