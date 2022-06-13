#include "main.h"

/**
*rev_string - Reverse order of a string
*@s: pointer to string to be reversed
*
*/
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char *c = s;
	int d = 0;
	int f;
	char h;

	while (*c != '\0')
	{
		c++;
		a++;
	}
	b = a - 1;

	for ( ; d < ((b / 2) + 1) ; d++)
	{
		f = (b - d);
		h = s[d];
		s[d] = s[f];
		s[f] = h;
	}
}

