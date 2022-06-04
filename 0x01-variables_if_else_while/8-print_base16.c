#include <stdio.h>

/**
*main - Starting point of program
*
* Description: Program to display base10 numbers
*
* Return: Always 0 Success
*/
int main(void)
{
	int digit;

	char letter;

	for (digit = 0; digit <= 9; digit++)
		putchar((digit % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
