#include "main.h"

/**
*_strchr - Locates a character in a string
*@s: Pointer to string
*@c: Character to locate
*
*Return: Pointer to first encounter
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i)
	}

	return (NULL);
}

