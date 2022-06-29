#include "main.h"

/**
*_strncat - Concatenate strings with max n bytes
*@dest: First parameter
*@src: Second parameter
*@n: Max no of bytes
*
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (c = 0; c < n; c++)
	{
		dest[i + c] = src[c];
		if (src[c] == '\0')
			c = n;
	}
	return (dest);
}
