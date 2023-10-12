#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 * @separator: The string separator
 * @n: The number of arguments
 * @...: The integer to print
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list ag;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ag, n);
	while (x--)
		printf("%d%s", va_arg(ag, int),
			x ? (separator ? separator : "") : "\n");
	va_end(ag);
}
