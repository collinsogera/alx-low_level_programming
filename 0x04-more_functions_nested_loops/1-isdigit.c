#include "main.h"

/**
*_isdigit - Program to check for a digit
*@c: digit parameter
*
* Return: 1 if digit, else 0
*/
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
		return (0);
}

