#include "main.h"

/**
*leet - Encodes a string into 1337
*@n: String to be encoded
*
*Return: Encoded string
*/
char *leet(char  *n)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == s1[j])
		{
			n[i] = s2[j];
		}
	}

	return (n);
}
