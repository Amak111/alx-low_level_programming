#include <stdio.h>

/**
 * main - Print number of arguments passed.
 * @argc: number of commandlines.
 * @argv: Pointer to an array of command line
 *
 * Return: 0 (Seccess), non-zero (Fail)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
