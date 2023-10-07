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
	void *f;

	if (size == 0 || nmemb == 0)
		return (NULL);
	f = malloc(sizeof(int) * nmemb);

	if (f == 0)
		return (NULL);

	_memset(f, 0, sizeof(int) * nmemb);

	return (f);
}
