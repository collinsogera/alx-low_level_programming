#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *main - Multiplication of two numbers
 *@argc: counter
 *@argv: Arguements
 *Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int multiple = 1;

	if (argc == 3)
	{
		multiple *= atoi(argv[argc - 2]);
		multiple *= atoi(argv[argc - 1]);
		printf("%d\n", multiple);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

