#include "main.h"

/**
*_strchr - Locate a character in a string
*@s: First parameter
*@c: Second parameter
*
*Return: Pointer to first occurence of c
*/
char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
		x++;

	for (y = 0; y <= x; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}
	return ('\0');
}

