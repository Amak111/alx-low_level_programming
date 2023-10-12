#include "variadic_functions.h"


/**
 * sum_them_all - sums variable arguments
 * @n: The number of arguments
 * @...: The integers to sum
 *
 * Return: The integer sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int x = 0, y = n;
	va_list ag;

	if (n == 0)
		return (0);
	va_start(ag, n);
	while (y--)
		x += va_arg(ag, int);
	va_end(ag);
	return (x);
}
