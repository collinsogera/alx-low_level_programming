#include "main.h"

/**
 *is_prime_number - Check if number is prime
 *@n: number to check
 *
 *Return: Integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 *is_prime - Check if number is prime
 *@n: Number to check
 *@a: Iterations
 *
 *Return: 1 if prime else 0
 */
int is_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (is_prime(n, a - 1));
}
