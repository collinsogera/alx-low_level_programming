#include <stdio.h>

/**
*main - Starting point of program
*
* Description: Program to print alphabets except q and e
*
* Return: Always 0 success
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}
	return (0);
}
