#include "main.h"

/**
 * *_realloc - allocates a memory block using malloc and free.
 * @ptr: Pointer to memory allocated
 * @old_size: Size in bytes, of the allocated space for ptr
 * @new_size: Size in bytes of the new memory block
 * Return: NULL if new_size = 0, and ptr is not NULL.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		n = malloc(new_size);
		if (n == NULL)
			return (NULL);
		return (n);
	}
	if (new_size > old_size)
	{
		n = malloc(new_size);
		if (n == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)n + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
