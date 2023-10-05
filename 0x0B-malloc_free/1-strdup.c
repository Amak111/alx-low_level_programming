#include "main.h"

/**
 * *_strdup - Return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: String
 * Return: 0
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *B;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	B = malloc(size * sizeof(*str) + 1);

	if (B == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			B[i] = str[i];
	}
	return (B);
}
