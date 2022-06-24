#include <stdio.h>
#include <stdlib.h>

/**
 *main - Add positive numbers
 *@argc: counter
 *@argv: arguements given
 *Return: 0 if no arguements, 1 if arguements diff than digits
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int argA;
	int arg2;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (argA = 1; argA < argc; argA++)
		{
			for (arg2 = 0; argv[argA][arg2] != '\0'; arg2++)
			{
				if (argv[argA][arg2] < '0' || argv[argA][arg2] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[arg]);
		}
	}
	printf("%i\n", add);
	return (0);
}

