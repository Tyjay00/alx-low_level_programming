#include "main.h"
#include <stdlib.h>

/**
  * free_grid - prints a grid
  * @grid: the address of the grid
  * @height: height of the grid
  *
  * Return: Null
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

