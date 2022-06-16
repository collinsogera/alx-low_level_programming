#Include "main.h"

/**
*reverse_array - Reverse array of integers content
*@a: First parameter
*@n: Second parameter
*
*/
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = n - 1; i >= n / 2; i--)
	{
		c = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = c;
	}
}
