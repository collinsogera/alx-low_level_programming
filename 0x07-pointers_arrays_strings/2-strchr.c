#include "main.h"

/**
*_strchr - Locates a character in a string
*@s: Pointer to string
*@c: Character to locate
*
*Return: Pointer to first encounter
*/
char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
		x++;

	for (y = 0; y <= a; y++)
	{
		if (c == s[y])
		{
			s = s + y;
			return (s);
		}
	}

	return ('\0');
}

