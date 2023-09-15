#include "main.h"

/**
 * print_numbers - print number from 0 to 9, followed by a new line.
 *		only using _putchar twice
 *
 * Return: Always 0 .
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
