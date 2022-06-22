#include "main.h"

/**
*_sqrt_recursion - Finds the natural squareroot of a number
*@n: Arguement
*
*Return: Squareroot of n
*/
int _sqrt_recursion(int n)
{
	return(squareroot(n, 1));
}
/**
 *squareroot - Calculates the natural square root of n
 *@n: First parameter
 *@a: Iterations
 *
 *Return: Natural square root
 */
int squareroot(int n, int a)
{
	int _sqrt = a * a;

	if (_sqrt > n)
		return (-1);
	if (_sqrt == n)
		return (i);

	return (squareroot(n, a + 1));
}
