#include <stdio.h>

/**
*main - Starting point of program
*
* Description - Program to display size of data types
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char _character;
	int _integer;
	long _long;
	long long _longLong;
	float _float;

	printf("Size of a char: %lu byte(s)\n", sizeof(_character));
	printf("Size of an int: %lu byte()s\n", sizeof(_integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(_long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(_longLong));
	printf("Size of a float: %lu byte(s)\n", sizeof(_float));

	return (0);
}

