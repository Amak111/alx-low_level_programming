#include "main.h"

/**
 * *_strspn - Gets length of a prefix substring
 * @s: The string
 * @accept: Bytes
 *
 * Return: unsigned int.
*/
unsigned int _strspn(char *s, char *accept)
{

	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}

	return (i);
}
