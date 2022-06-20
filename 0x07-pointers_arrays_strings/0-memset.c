#include "main.h"

/**
*_memset - Fills memory with constant byte
*@s: Memory address Pointer
*@b: Constant byte
*@n: Bytes in memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

