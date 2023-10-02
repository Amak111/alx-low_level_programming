#include "main.h"

/**
 * *_memcpy - Copies memory
 * @dest: Memory content
 * @src: Source
 * @n: Length of src
 *
 * Return: Pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
