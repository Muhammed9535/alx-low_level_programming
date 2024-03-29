#include "main.h"
#include <stdlib.h>
/**
  * free_grid -  a function that frees a 2 dimensional grid previously
  * created byyour alloc_grid function.
  * @grid: pointer to array
  * @height: height of grid
  * Return: Nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
