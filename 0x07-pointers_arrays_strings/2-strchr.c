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
	int a;
	char *null = NULL;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a)
	}
	if (s[a] == '\0')
		return (s + a);
}

