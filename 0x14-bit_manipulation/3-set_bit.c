#include "main.h"

/**
 *set_bit - Function that sets value of a bit to 1 at given index
 *@n: Number
 *@index: Index starting 0
 *
 *Return: 1 if success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int sum;

	if (index > 63)
		return (-1);
	sum = 1 << index;
	*n = *n | add;
	return (1);
}
