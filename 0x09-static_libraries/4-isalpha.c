#include"main.h"

/**
 * _isalpha - function to check if
 *              character is lowercase or uppercase
 *
 * @c: check input from other function
 *
 * Return: return 1 if 'c' is lowercase
 *              otherwise always 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
