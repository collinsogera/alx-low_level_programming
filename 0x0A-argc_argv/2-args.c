#include "main.h"
#include <stdio.h>

/**
 *main - Print each given arguement
 *@argc: counter
 *@argv: String array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}

