#include "main.h"

/**
*print_diagsums - Print sum of two diagonals
*@a: First parameter
*@size: second parameter
*/
void print_diagsums(int *a, int size)
{
	int x, totala = 0, totalb = 0;

	for (x = 0; x < size * size; x++)
	{
		if (x % (size + 1) == 0)
			totala += *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			totalb += *(a + x);
	}

	printf("%d, %d\n", totala, totalb);
}

