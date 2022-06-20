#include "main.h"

/**
*print_chessboard - Function to print a chessboard
*@a: array
*
*/
void print_chessboard(char (*a)[8])
{
	int b, c, d;

	d = 0;

	while (a[d][d])
		d++;

	d -= 1;

	for (b = 0; b < d; b++)
	{
		for (c = 0; c < d; c++)
			_putchar(a[x][b]);
		_putchar('\n');
	}
}

