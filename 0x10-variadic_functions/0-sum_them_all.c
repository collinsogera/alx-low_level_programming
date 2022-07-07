#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - Summation
 *@n: Number of arguements
 *Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
