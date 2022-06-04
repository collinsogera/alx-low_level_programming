#include <stdio.h>
#include <ctype.h>
/**
*main - Program start
*Description: Program to print lowercase.
*
*Return: Success;
*
*/
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar("\n");
	return (0);
}
