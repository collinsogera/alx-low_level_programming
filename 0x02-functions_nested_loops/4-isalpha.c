#include "main.h"

/**
*_isalpha - Function to check for alphabet characters
*@c: First parameter of our function
*
*Return: 1 if is alphabet, 0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

