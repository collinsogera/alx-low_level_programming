#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Return pointer to a 2D array
 *@width: Width array
 *@height: height array
 *
 *Return: Pointer
 */
int  **alloc_grid(int width, int height)
{
	int **a, b, c, d;

	if (width <= 0 || heoght <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		a[b] = malloc(width * sizeof(int));
		if (a[b] == NULL)
		{
			for (d = 0; d <= b; d++)
				free(a[d]);
			free(a);
			return (NULL);
		}
		for (c = 0; c < width, c++)
			a[b][c] = 0;
	}
	return (a);
}

