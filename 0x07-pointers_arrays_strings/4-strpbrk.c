#include "main.h"

/**
*_strpbrk - Search a string for any set of bytes
*@s: Pointer to byte
*@accept: Pointer to bytes in second string
*
*Return: Pointer to byte s matching bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}

	return (NULL);
}

