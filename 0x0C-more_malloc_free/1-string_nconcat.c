#include "main.h"
#include <stdlib.h>

/**
 *_strlen - Determin string length
 *@string: String provided
 *
 *Return: String length
 */
int _strlen(char *string)
{
	int len;

	len = 0;
	while (string[len] != '\0')
		len++;
	return (len);
}

/**
 *string_nconcat - Concat two strings
 *@s1: First string
 *@s2: Second string
 *@n: Determinant integer
 *
 *Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, t, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";
	t = _strlen(s1);
	l = _strlen(s2);

	if (n < l)
		l = n;

	s = malloc(t + l + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < t; i++)
		*(s + i) = *(s1 + i);

	for (i = 0; i < l; i++)
		*(s + (i + t)) = *(s2 + i);
	*(s + (i + t)) = '\0';

	return (s);
}

