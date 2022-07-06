#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_name - Print a name
 *@name: String
 *@f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}

