#include "main.h"

/**
*print_to_98 - Function to print natural numbers
*@n: First parameter
*
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
			}
			n--;
		}
	}
}

