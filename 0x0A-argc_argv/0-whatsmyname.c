#include "main.h"
#include <stdio.h>

/**
 *main - Print name of program
 *@argc: Counter
 *@argv: String array
 *Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
