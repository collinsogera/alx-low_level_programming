#include "main.h"

/**
*rev_string - Reverse order of a string
*@s: pointer to string to be reversed
*
*/
void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}