#include "main.h"
#include <stdio.h>

/**
*print_array - Print n elements of an array of integers
*@a: pointer to array
*@n: number of integers in array
*/
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
