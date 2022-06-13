#include "main.h"

/**
*_strlen - Obtain length of a string
*@s: Pointer to string address
*
*Return: length of the string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

