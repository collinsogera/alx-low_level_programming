#include "main.h"

/**
*string_toupper - Convert string to upper
*@c: String to be converted
*
*Return: Uppercase string
*/
char *string_toupper(char *c)
{
	int x = 0;

	while (c[x] != '\0')
	{
		if (c[x] >= 'a' && c[x] <= 'z')
		{
			c[x] = c[x] - 'a' + 'A';
		}
		x++;
	}
	return (c);
}

