#include "main.h"
/**
 * wrdcnt - Counts the number of words in the string
 * @s: string
 * Return: int
*/
int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
/**
 * *strtow - splits a string into words.
 * @str: String to splits
 * Return: Pointer to array of strings
*/
char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **x;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	x = (char **)malloc(n * sizeof(char *));
	if (x == NULL)
		return (NULL);
	x[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
		x[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (x[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(x[k]);
				free(x[n - 1]);
				free(x);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				x[wc][l] = str[i + l];
			x[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (x);
}
