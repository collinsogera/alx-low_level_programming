#include "main.h"

/**
*_strstr - Locate a substring
*@haystack: First parameter
*@needle: Second parameter
*
*Return: Pointer to beginning of substring
*/
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
				break;
			y++;
		}
		if (needle[y] == '\0')
			return (haystack + x);
		x++;
	}
	return ('\0');
}

