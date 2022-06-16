#include "main.h"

/**
*_strncpy - Copy string
*@dest: Parameter one
*@src: Second parameter
*@n: Max no of bytes
*
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';
	}

	return (dest);
}
