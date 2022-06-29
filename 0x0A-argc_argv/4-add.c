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
	int a, b, result = 0;

	for (a = 1; a < argc; a += 1)
	{
		for (b = 0; (argv[a])[b] != '\0'; b += 1)
		{
		if (((argv[a])[b] - '0') >= 0 && ((argv[a])[b] - '0') <= 9)
			continue;
		else
		{
			printf("Error\n");
			return (1);
		}
		}
		result += atoi(argv[a]);
	}
	printf("%d\n", result);
	return (0);
}

