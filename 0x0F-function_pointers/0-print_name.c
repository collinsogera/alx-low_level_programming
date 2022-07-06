#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - Print a name
 *@name: String
 *@f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

