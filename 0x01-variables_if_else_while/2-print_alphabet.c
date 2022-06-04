#include <stdio.h>

/**
*main - Starting point of program
*
* Description: Program to print alphabets in lowercase
*
* Return: Always 0 Success
*/

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c++;
	}
	return (0);
}

