#include "main.h"

/**
*more_numbers - Program to print numbers several times
*
*/

void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c < 10)
				_putchar((c % 10) + '0');
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

