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

	for (i = 0; i < n--; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
