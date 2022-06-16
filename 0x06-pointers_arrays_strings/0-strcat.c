#include "main.h"

/**
*_strcat - Function to concatenate two strings
*@dest: Pointer parameter one
*@src: Pointer parameter two
*
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;

	int b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a]; a++)
		dest[b++] = src[a];

	return (dest);
}

