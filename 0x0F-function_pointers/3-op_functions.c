#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 *op_add - Add two integers
 *@a: First integer
 *@b: Second integer
 *Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Subtract two integers
 *@a: First integer
 *@b: Second integer
 *Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Multiplies two integers
 *@a: First integer
 *@b: Second integer
 *Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Divides two integers
 *@a: First integer
 *@b: Second integer
 *Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - Modulus of two integers
 *@a: First integer
 *@b: Second integer
 *Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

