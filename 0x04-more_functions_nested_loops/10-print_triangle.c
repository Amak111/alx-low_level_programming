#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int hi, ba;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hi = 1; hi <= size; hi++)
		{
			for (ba = 1; ba <= size; ba++)
			{
				if ((hi + ba) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
