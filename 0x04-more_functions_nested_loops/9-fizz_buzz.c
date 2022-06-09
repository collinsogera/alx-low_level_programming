#include "main.h"

/**
*fizz_buzz - Function to print 1 - 100 while
*considering multiples of 3 and 5
*/
void fizz_buzz(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if(i % 5 == 0)
			printf("Buzz");
		else
			printf(i);
		printf(" ");
	}
}
