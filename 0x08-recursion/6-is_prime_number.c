#include "main.h"

/**
 *is_prime_number - Check if number is prime
 *@n: number to check
 *
 *Return: Integer
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
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
	if (n <= 1)
		return (0);
	if (n % a == 0 && a > 1)
		return (0);
	if ((n / a) < 1)
		return (1);

	return (is_prime(n, a + 1));
}
