#include "main.h"
#include <stdlib.h>

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
	int i;
	unsigned int j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (j < n && s2[j] != '\0')
	{
		s[i] = s2[j];
		i++, j++;
	}
	s[i] = '\0';
	return (s);
}

