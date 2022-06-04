#include <stdio.h>

/**
*main - Starting point of program
*
*Description: Program to print alphabets with putchar
*
*Return: Always 0 success
*/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	putchar('\n');

	return (0);
}
