#include "main.h"

/**
*_strlen_recursion - Returns length of a string
*@s: Pointer to string
*
*Return: Length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (_strlen_recursion(s) + 1);
}

