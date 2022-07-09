#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Compute sum of parameters
 *@n: Number of parameters
 *Return: Sum (integer)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
