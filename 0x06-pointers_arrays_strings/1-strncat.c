#include "main.h"

/**
*_strncat - Function to concatenate two strings using n bytes
*@dest: First arguement
*@src: second arguement
*@n: maximum no of bytes
*
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;

	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

