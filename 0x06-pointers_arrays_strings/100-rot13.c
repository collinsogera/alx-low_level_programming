#include "main.h"

/**
*rot13 - Encodes string using rot13
*@n: String to be encoded
*
*Return: Encoded string
*/
char *rot13(char *n)
{
	int x = 0, y = 0, neg = -1;
	char alpha[] = "ANBOCPDQERFSGTHUIVJWKXLYMZanbocpdqerfsgthuivjwkxlymz";

	for (x = 0; n[x]; x++)
	{
		neg = 1;

		for (y = 0; n[x] != alpha[y] && y < 52; y++)
			neg = (neg * -1);
		if (n[x] = (n[x] + (13 * neg));
	}
	return (n);
}
