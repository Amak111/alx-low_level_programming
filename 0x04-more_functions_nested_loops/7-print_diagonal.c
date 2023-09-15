#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of time of times the \
 *	should be printed
*/

void print_diagonal(int n)
{

	int space, post;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (post = 1; post <= n; post++)
		{
			for (space = 1; space <= post; space++)
				_putchar(' ');
			_putchar(92); /*equal '/'*/
			_putchar('\n');
		}
	}
}
