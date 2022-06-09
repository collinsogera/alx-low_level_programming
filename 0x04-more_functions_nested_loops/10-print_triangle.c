#include "main.h"

/**
*print_triangle - Function to print triangle using #
*@size: Specifies the width and height of triangle
*
*/
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b > 0; b--)
			{
				_putchar(' ');
			}
			for (b = 0; b < a; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

