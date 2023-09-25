#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *	of a square matrix of integers.
 * @a: Secound array
 * @size: Size or array
*/
void print_diagsums(int *a, int size)
{
	int x, y = 0, z = 0;

	for (x = 0; x < size; x++)
	{
		y += a[x];
		z += a[size - x - 1];
		a += size;

	}
	prinf("%d, " y);
	printf("%d\n", z);
}
