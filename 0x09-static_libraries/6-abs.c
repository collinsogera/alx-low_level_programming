#include "main.h"

/**
*_abs - Function to obtain absolute value
*@a: First arguement
*
* Return: 1 if successful
*/

int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}
