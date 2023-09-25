#include "main.h"

/**
 * *_strpbrk - Searching for string
 * @s: String
 * @accept: String for matching
 * Return: Pointer to byte in s that matching one of bytes in accept
 *	NULL if not matching
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}

	return (0);
}
