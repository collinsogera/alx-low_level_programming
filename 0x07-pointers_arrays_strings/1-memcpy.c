#include "main.h"

/**
*_memcpy - Copies memory area
*@dest: First memory area
*@src: Second memory area
*@n: Number of bytes to be copied
*
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

