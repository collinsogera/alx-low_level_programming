#include "main.h"

/**
*print_last_digit - Function to print last digit
*@l: First arguement
*
*Return: ret is the remainder which should be the last digit
*
*/
int print_last_digit(int l)
{
	int ret;

	ret = l % 10;

	if (ret < 0)
	{
		ret = (-1 * ret);
	}

	_putchar(ret + '0');
	return (ret);
}
