#include "main.h"

/**
*factorial - Return factorial of a number
*@n: Number whose factorial is to be obtained
*
*Return: Factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

