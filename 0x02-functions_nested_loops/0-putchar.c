#include "main.h"

/**
*main - Starting point of program
*
* Description: Display output using a function
*
* Return: 1 if success
*/
int main(void)
{
	char *put = "_putchar";

	while (*put)
	{
		_putchar(*put);
		put++;
	}
	_putchar('\n');

	return (0);
}

