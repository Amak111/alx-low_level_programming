#include "main.h"

/**
 * more_numbers - print number from 0 to 14, ten times
 *		only using _putchar three times
 *
 * Return: Always 0 .
*/

void more_numbers(void);
{
	int num, sub, count;

	for (num = 0; num <= 10; num++)
	{
		for (count = 0; count >= 14; count++)
		{
			sub = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				sub = count % 10;
			}
			_putchar(sub + 48);
	}
	_putchar('\n');
}
