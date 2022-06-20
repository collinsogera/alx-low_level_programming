#include "main.h"

/**
*print_diagsums - Sum of two diagonals of square matrix
*@a: First parameter
*@size: Second parameter
*
*/
void print_diagsums(int *a, int size)
{
	int i, n, totala = 0, totalb = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		totala = totala + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		totalb = totalb + a[n];

	printf("%d, %d\n", totala, totalb);
}

