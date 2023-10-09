#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: Pointer to put the constant
 * @b: Constant
 * @n: Max bytes to use
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: Array length
 * @size: Size of each element
 * Return: Pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(sizeof(int) * nmemb);

	if (a == NULL)
		return (NULL);

	_memset(a, 0, sizeof(int) * nmemb);

	return (a);
}
