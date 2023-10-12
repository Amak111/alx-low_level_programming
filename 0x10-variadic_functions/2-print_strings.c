#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 * @separator: The string separator
 * @n: The number of arguments
 * @...: The strings to print
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *str;
	va_list ag;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ag, n);
	while (x--)
		printf("%s%s", (str = va_arg(ag, char *)) ? str : "(nil)",
			x ? (separator ? separator : "") : "\n");
	va_end(ag);
}
