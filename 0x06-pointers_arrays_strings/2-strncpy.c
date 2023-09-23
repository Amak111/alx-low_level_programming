#include "main.h"

/**
 * _strncpy - a function that copies string.
 *
 * @dest: pointer to destnation input puffer
 * @src: pointer to source input buffer
 * @n: number of bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
