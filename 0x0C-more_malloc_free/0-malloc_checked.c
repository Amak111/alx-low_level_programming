#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: int
 * Return: Pointer to the array initialized or NULL
*/

void *malloc_checked(unsigned int b)
{
	int *f = malloc(b);

	if (f == 0)
		exit(98);

	return (f);
}
