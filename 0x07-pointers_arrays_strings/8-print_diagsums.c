#include "main.h"

/**
*print_diagsums - Print sum of two diagonals
*@a: First parameter
*@size: second parameter
*/
void print_diagsums(int *a, int size)
{
	int x, totala = 0, totalb = 0;

	int m = size * size;

	for (x = 0; x < m; x++)
	{
		if (x % (size + 1) == 0)
			totala += *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x < m - 1)
			totalb += *(a + x);
	}

	printf("%d, %d\n", totala, totalb);
}

