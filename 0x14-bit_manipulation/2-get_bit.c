#include "main.h"

/**
 *get_bit - Function that returns the value of a bit
 *@n: bit value of index
 *@index: Index starting 0
 *
 *Return: Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
		return (n & 1);
	return (get_bit(n >> 1, index - 1));
}
