#include <stdio.h>
#include <stdlib.h>

/**
 *main - Add positive numbers
 *@argc: counter
 *@argv: arguements given
 *Return: 0 if no arguements, 1 if arguements diff than digits
 */
int main(int argc, char *argv[])
{
	int total = 0;
	int x;
	int y;

	if (argc > 0)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!(isdigit(argv[x][y])))
				{
					printf("Error\n");
					return (1);
				}
			}
			total += atoi(argv[x]);
		}
		printf("%d\n", total);
	}
	else
		printf("0\n";
	return (0);
}

