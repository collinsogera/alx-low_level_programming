#include <stdio.h>
#include "main.h"

/**
*main - Print no or arguements passed
*@argc: Counter
*@argv: String of array
*Return: 0
*/
int main(int argc, char **argv)
{
(void) argv;

printf("%i\n", argc - 1);
return (0);
}

