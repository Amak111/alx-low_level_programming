#include <unistd.h>

/**
 * _putchar - Write the character cto stdout
 * @c: The character to print
 *
 * Return: On seccess 1.
 * On error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
