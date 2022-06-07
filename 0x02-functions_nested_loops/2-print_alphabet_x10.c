include "main.h"
/**
*print_alphabet_x10 - Display alphabets ten times
*
*Description: Program to use _putchar to output
*
*/

void print_alphabet_x10(void)
{
	char a;

	int i = 0;

	while (i <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		i++;
		_putchar('\n');
	}
}
