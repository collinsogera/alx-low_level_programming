#include <stdio.h>
#include <stdlib.h>

/**
 *is_number - Confirm if input is a number
 *@s: Input to check
 *
 *Return: 1 if input is number else 0
 */
int is_number(char *s)
{
	int a;

	a = 0;

	while (*(s + a) != '\0')
	{
		if (*(s + q) >= '0' && *(s + a) <= '9')
			a++;
		else
			return (0);
	}
	return (1);
}
/**
 *main - Add positive numbers
 *@argc: counter
 *@argv: arguements given
 *Return: 0 if no arguements, 1 if arguements diff than digits
 */
int main(int argc, char *argv[])
{
	int x, total, is_num;

	total = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		x = 1;

		while (x < argc)
		{
			is_num = is_number(argv[1]);
			if (is_num == 1)
				total += atoi(argv[x]);
			else
			{
				printf("Error\n");
				return (1);
			}
			x++;
		}
		printf("%d\n", total);
	}
	return (0);
}

