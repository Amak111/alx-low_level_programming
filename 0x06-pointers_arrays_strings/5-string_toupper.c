#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: string to return.
 * Return: string.
*/

char *string_toupper(char *s)
{
	int x;

	for (x = 0, s[x] != '\0'; x++)
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] = s[x] - 32;
		}
	}
	return (s);
}
