#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Allocate memory for array
 *@nmemb: No of members
 *@size: No of bytes
 *
 *Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int a;
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	y = array;
	for (a = 0; a < nmemb * size; a++)
		y[a] = 0;
	return (array);
}

