#include <stdio.h>

/**
*main - Starting point of program
*
* Description - Displaying base 10 single digit numbers
*
* Return: Always 0 Success
*/
int main(void)
{
	int a;

	a = 0;

	while (a <= 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");

	return (0);
}

