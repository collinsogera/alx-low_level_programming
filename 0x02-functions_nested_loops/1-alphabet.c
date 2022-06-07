#include "main.h"

/**
*print_alphabet - Function to print lowercase alphabets
*
*Return: Has no return value
*
*/
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}

