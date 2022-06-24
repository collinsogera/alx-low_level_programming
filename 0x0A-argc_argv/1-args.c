#include <stdio.h>
#include "main.h"

/**
*main - Print no or arguements passed
*@argc: Counter
*@argv: String of array
*Return: 0
*/
int main(int argc, char *argv[])
{
	int a;

	(void)argv;

	for (a = 0; a < argc; a++)
	{
		if (a + 1 == argc)
			printf("%i\n", a);
	}
	return (0);
}

