#include "main.h"

/**
*string_toupper - Convert string to upper
*@str: String to be converted
*
*Return: Uppercase string
*/
char *string_toupper(char *str)

	int a = 0;

	for ( ; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;

	}

	return (str);
}

