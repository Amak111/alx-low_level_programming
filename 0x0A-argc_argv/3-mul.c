#include <stdio.h>
#include <stdlib.h>

/**
 *main - Print sum of two numbers.
 *@argc: number of commandline
 *@argv: Pointer to an array
 *
 * Return: 0 (Success), non-zero (Fail)
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
