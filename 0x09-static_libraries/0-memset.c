#include "main.h"

/**
 * *_memset - file memory.
 * @s: pointer to constant
 * @b: the constant
 * @n: max using number
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
