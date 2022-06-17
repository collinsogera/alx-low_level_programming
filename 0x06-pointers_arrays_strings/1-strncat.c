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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
