#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins
 *to make change for an amount of money.
 *@argc: number of argument
 *@argv: Pointer to an array
 *
 * Return: 0 (Success), non-zero(Fail).
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lastcents = 0, coints = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (coints >= cents[i])
			{
				lastcents += coints / cents[i];
				coints = coints % cents[i];
				if (coints % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lastcents);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		return (0);
}
