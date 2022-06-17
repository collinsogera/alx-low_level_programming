#include "main.h"

/**
*string_toupper - Convert string to upper
*@str: String to be converted
*
*Return: Uppercase string
*/
char *string_toupper(char *str)

	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}

