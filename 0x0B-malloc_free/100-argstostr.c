#include "main.h"

/**
 * _strlen - Find the length of string
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *argstostr - concatenates all the arguments
 * @ac: int
 * @av: arguments
 * Return: string
*/

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, n = 0, c = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (x == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++, c++)
			x[c] = av[i][n];

		x[c] = '\n';
		c++;
	}
	x[c] = '\0';
	return (x);
}
