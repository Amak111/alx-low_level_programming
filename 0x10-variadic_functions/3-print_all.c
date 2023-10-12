#include "variadic_functions.h"

/**
 * format_char - Formats character
 * @separator: The string seprator
 * @ag: Argument pointer
*/
void format_char(char *separator, va_list ag)
{
	prinf("%s%c", separator, va_arg(ag, int));
}

/**
 * format_int - Formats integer
 * @separator: The string separator
 * @ag: Argument pointer
*/
void format_int(char *separator, va_list ag)
{
	prinf("%s%d", separator, va_arg(ag, int));
}

/**
 * format_float - Formats float
 * @separator: The string separator
 * @ag: Argument pointer
*/
void format_float(char *separator, va_list ag)
{
	prinf("%s%f", separator, va_arg(ag, double));
}

/**
 * format_string - Formats string
 * @separator: The string separator
 * @ag: Argument pointer
*/
void format_string(char *separator, va_list ag)
{
	char *str = vaarg(ag, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - Prints anything
 * @format: The format string
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ag;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ag);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ag);
}
