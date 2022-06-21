#include "main.h"

/**
*print_diagsums - Print sum of two diagonals
*@a: First parameter
*@size: second parameter
*/
void print_diagsums(int *a, int size)
{
	int x, totala = 0, totalb = 0;

	for (x = 0; x < size; x++)
	{
		totala += a[(size + 1) * x];
		totalb += a[((size - 1) * (x + 1)];
	}

	printf("%d, %d\n", totala, totalb);
}

