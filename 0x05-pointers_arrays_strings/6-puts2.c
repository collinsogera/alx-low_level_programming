#include "main.h"

/**
*puts2 - Prints each character of a string to stdout
*@str: Pointer to string
*
*/
void puts2(char *str)
{
	int a = 0;
	int i = 0;
	char *c = str;
	int d;

	while (*c != '\0')
	{
		c++;
		a++;
	}
	i = a - 1;

	for (d = 0; d <= i; d++)
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
	}
	_putchar('\n');
}

