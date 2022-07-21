nclude "main.h"

/**
 *get_endianness - Function that checks endianness
 *
 *Return: 1 if success
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
