#include "main.h"
/**
*main - Starting point of program
*
*Description: Program to check +ve, -ve or 0
*
*Return: Always 0 Success
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
		printf("%d is negative\n", i);

	return (0);
}

