#include "main.h"

/**
*_strstr - Locate a substring
*@haystack: Pointer to string haystack
*@needle: Pointer to string needle
*
*Return: Pointer to beginning of substring
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}

