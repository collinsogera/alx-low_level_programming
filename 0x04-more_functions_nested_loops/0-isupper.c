#include "main.h"

/**
*_isupper - Checks for uppercase characters
*@c: Character passed in
*
* Return: 0 if uppercase, else 1
*/
int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
