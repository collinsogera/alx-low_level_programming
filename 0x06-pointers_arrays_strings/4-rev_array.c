#Include "main.h"

/**
*reverse_array - Reverse array of integers content
*@a: First parameter
*@n: Second parameter
*
*/
void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;
	int tmp;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
}
