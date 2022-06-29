#include "main.h"
#include <stdlib.h>

/**
 *_strdup - Return pointer to newly allocated space
 *@str: Array
 *
 *Return: Pointer
 */
char *_strdup(char *str)
{
	int a, b;
	char *s;

	if (str == NULL)
		return (0);

	a = 0;

	while (*(str + a) != '\0')
		a++;

	s = malloc(a + 1);

	if (s == 0)
		return (0);

	for (b = 0; b < a; b++)
		*(s + b) = *(str + b);

	return (s);
}
