#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates and initializes an array of characters
 *@size: Array size
 *@c: Character
 *
 *Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	chat *s;

	if (size == 0)
		return (0);

	s = malloc(size);

	if (s == 0)
		return (0);

	for (a = 0; a < size; a++)
		*(s + a) = c;
	*(s + a) = '\0';

	return (s);
}
