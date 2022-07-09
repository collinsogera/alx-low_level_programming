#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - Prints a name
 *@name: Name of individual
 *@f: Pointer
 */
void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
