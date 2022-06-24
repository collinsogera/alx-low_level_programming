#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *main - Multiplication of two numbers
 *@argc: counter
 *@argv: Arguements
 *Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int multiple;

	if (argc == 3)
	{
		multiple = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiple);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

