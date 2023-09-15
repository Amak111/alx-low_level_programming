#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Seccess)
*/

void print_square(int size)
{
	int row, colu;

	for (row = 1; row <= size; row++)
	{
		for (colu = 1; colu <= size; colu++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
