#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: Array length
 * @size: Size of each element
 *
 * Return: Pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j = 0, l = 0;
	char *a;

	if (size == 0 || nmemb == 0)
		return (NULL);

	l = nmemb * size;
	a = malloc(l);

	if (a == NULL)
		return (NULL);

	while (j < l)
	{
		a[j] = 0;
		j++;
	}

	return (a);
}
