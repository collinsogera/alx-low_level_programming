#include "main.h"

/**
*_strspn - Gets length of a prefix substring
*@s: Pointer to substring
*@accept: Pointer to bytes
*Return: Number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, a, b;

	a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		b = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				a++;
				b = 1;
			}
		}
		if (b == 0)
			return (a);
	}

	return (a);
}

