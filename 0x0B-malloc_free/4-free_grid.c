#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - start of function to free grid
 * @grid: grid
 * @height: heigh of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height == 0)
		return;
	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
