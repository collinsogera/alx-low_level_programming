#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - Index of first element
 *@array:Array elements
 *@size: Number of elements in array
 *@cmp: Pointer function
 *Return: Index of array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0 && array != NULL cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

