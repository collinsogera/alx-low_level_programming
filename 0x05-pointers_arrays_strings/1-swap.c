#include "main.h"

/**
*swap_int - Swaps int values using pointers
*@a: Pointer to first integer
*@b: Pointer to second integer
*
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

