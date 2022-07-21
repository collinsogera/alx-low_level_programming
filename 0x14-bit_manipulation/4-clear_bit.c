#include "main.h"

/**
 *clear_bit - Function that clears the value of a bit
 *@n: Number
 *@index: Index starting at 0
 *
 *Return: 1 if success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int sum;

	if (index > 63)
		return (-1);
	sum = 1 << index;
	*n = *n & (~sum);
	return (1);
}
