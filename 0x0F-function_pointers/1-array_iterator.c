#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - Calls a function on each element of array
 *@array: Integer array
 *@size: Size of array
 *@action: Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
