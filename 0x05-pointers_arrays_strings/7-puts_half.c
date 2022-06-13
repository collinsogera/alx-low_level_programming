#include "main.h"

/**
*puts_half - prints half of a string
*@str: pointer to the string
*
*/
void puts_half(char *str)
{
	int a = 0;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		a++;
	}

	if (a % 2 == 0)
		c = a / 2;
	else
		c = (a + 1) / 2;
	for ( ; c < a; a++)
		_putchar(str[c]);
	_putchar('\n');
}

