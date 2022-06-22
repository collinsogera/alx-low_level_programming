#include "main.h"

/**
*_pow_recursion - Value of x raised to y
*@x: First parameter
*@y: Second paramter
*
*Return: X raised to power of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

