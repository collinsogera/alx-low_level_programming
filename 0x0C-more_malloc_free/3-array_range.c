#include "main.h"
#include <stdlib.h>

/**
 *array_range - Create array of integers
 *@min: minimum integer
 *@max: maximum integers
 *Return: Pointer
 */
int *array_range(int min, int max)
{
	int *array, less, a, b;

	if (min > max)
		return (NULL);
	less = max - min + 1;
	array = malloc(less * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (a = min, b = 0; a <= max && b < less; a++, b++)
		array[b] = a;

	return (array);
}

