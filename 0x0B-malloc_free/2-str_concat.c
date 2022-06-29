#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Concatenates two strings
 *@s1: Array 1
 *@s2: Array 2
 *
 *Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *con;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	a = 0, b = 0;

	while (*(s1 + a) != '\0')
		a++;
	while (*(s2 + b) != '\0')
		b++;

	con = malloc(a + b + 1);

	if (con == 0)
		return (0);
	for (c = 0; c < a; c++)
		*(con + c) = *(s1 + c);

	for (c = 0, d = a; c < d; d++, c++)
		*(con + d) = *(s2 + c);
	*(con + d) = '\0';

	return (con);
}

