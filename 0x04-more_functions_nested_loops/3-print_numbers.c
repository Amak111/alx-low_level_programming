#include "main.h"

/**
 * print_numbers - print number from 0 to 9, followed by a new line.
 *		only using _putchar twice
 *
 * Return: Always 0 .
*/

void print_numbers(void);
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
