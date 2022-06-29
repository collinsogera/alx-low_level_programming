#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Free a 2D
 *@grid: Width
 *@height: Height
 *
 *Return: Pointer
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a  = 0; a < height; a++)
	{
		free(*(grid + a);
	}
	free(grid);
}

