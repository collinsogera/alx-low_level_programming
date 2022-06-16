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
	int a;
	int b;

	i = 0;

	while (dest[i] != '\0')
		a++;

	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
