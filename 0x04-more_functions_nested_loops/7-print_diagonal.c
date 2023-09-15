#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *	should be printed
*/

void print_diagonal(int n)
{
	int space, postN;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postN = 1; postN <= n; postN++)
		{
			for (space = 1; space <= postN; space++)
				_putchar(' ');
			_putchar(92); /*equal '/' char*/
			_putchar('\n');
		}
	}
}
