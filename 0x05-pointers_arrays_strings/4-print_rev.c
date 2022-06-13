#include "main.h"

/**
*print_rev - Pring a string in reverse order
*@s: pointer to string
*
*/
void print_rev(char *s)
{
	int i;

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

