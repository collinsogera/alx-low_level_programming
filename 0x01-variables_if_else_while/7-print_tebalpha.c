#include <stdio.h>

/**
*main - Starting point of program
*
*Description: Print alphabets in reverse order
*
*Return: Always 0 success
*/
int main(void)
{
	char alphabet;

	alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
