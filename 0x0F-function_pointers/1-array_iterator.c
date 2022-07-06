#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - Fn given as parameter on each element array
 *@array:Array elements
 *@size: Size of array
 *@action: Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
