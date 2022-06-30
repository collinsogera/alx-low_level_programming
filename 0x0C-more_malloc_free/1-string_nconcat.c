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
	unsigned int a, b, c, x, y;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";
	a = _strlen(s1);
	b = _strlen(s2);

	if (n >= b)
		c = a + b + 1;
	else
	{
		c = a + n + 1;
		b = n;
	}
	s = malloc(c);
	if (s == NULL)
		return (NULL);

	x = 0;
	while (x < a)
	{
		str[x] = s1[x];
		x++;
	}

	y = 0;
	while (y < b)
	{
		str[x + y] = s2[y];
		y++;
	}
	s[x + y] = '\0';
	return (s);
}

