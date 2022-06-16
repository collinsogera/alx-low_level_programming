#include "main.h"

/**
*_strncpy - Function to copy a string
*@dest: Parameter one
*@src: Parameter two
*@n: Number of max bytes
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
			dest[i++] = '0\';
	}

	return (dest);
}
