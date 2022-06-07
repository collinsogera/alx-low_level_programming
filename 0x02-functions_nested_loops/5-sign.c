#include "main.h"

/**
*print_sign - Function to determine sign of a number
*@c: First parameter
*
* Return: 0 if positive, 0 if 0 else negative
*/
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

