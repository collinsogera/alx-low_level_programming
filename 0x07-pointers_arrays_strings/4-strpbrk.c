#include "main.h"

/**
*_strpbrk - Search a string for a set of bytes
*@s: First arguement
*@accept: Second arguement
*
*Return: Pointer to byte in s matching bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	x = 0;

	y = 0;

	while (s[x])
	{
		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}

			y++;
		}

		x++;
	}
	return ('\0');
}

