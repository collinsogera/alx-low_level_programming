#include "main.h"

/**
*_islower - Checks for lowercase
*@c: Parameter for function
*
*Return: 1 if lower else 0
*/

int _islower(int c)
{
	int a;

	if ((a >= 'a') && (a <= 'z'))
		return (1);
	else
		return (0);
}

