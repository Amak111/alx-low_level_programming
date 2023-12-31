#include "main.h"

/**
 * *_strchr - Files memory content byte.
 * @s: Pointer to constant
 * @c: The constant
 *
 * Return: Pointer to s
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
