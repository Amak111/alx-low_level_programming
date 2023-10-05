#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: Secound array
*/

int **alloc_grid(int width, int height)
{
	int **spac, i, n;

	spac = malloc(sizeof(*spac) * height);

	if (width <= 0 || height <= 0 || spac == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			spac[i] = malloc(sizeof(**spac) * width);
			if (spac[i] == 0)
			{
				while (i--)
					free(spac[i]);
				free(spac);
				return (NULL);
			}

			for (n = 0; n < width; n++)
				spac[i][n] = 0;
		}
	}
	return (spac);
}
