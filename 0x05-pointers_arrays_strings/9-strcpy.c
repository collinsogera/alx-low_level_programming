#include "main.h"

/**
*_strcpy - Copies string pointed by src
*@dest: Pointer one
*@src: second pointer
*Return: dest is returned
*/
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;


	while (*(str + a) != '\0')
		a++;

	for ( ; b < a; b++)
		dest[b] = src[b];
	dest[a] = '\0';

	return (dest);
}

