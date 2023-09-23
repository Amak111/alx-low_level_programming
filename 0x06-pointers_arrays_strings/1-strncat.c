#include "main.h"

/**
 * _strcat - a function that concatenates
 *	two strings.
 *
 * @dest: pointer to destnation input
 * @sre: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *sre, int n)
{
	int a, b;

	a = 0;

	while (dest[a])
		a++;

	for (b = 0; b < n && src[b] != '\0'; b++)

		dest[a + b] = src[b];

	dest[a + b] = '\0';

	return (dest);
}
