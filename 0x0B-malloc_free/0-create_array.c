#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: Size of array
 * @c: char to initialize
 * Return: Pointer to array if initialized or null
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
