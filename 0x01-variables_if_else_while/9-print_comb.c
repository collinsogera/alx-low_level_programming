#include <stdio.h>

/**
*main - Entry point of program
*
* Description: Combination of single digits
*
* Return: Always 0 Success
*/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
