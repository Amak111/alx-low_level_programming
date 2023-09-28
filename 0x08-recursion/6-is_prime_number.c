#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Chick if n a prime number.
 * @notn: int
 * @n: int
 * Return: 0 or 1
*/

int checking(int n, int notn);
int is_prime_number(int n)
{
	return (checking(n, 2));
}

/**
 * checking - Checking number if number < n can divide
 * @n: int
 * @notn: int
 * Return: int
*/

int checking(int n, int notn)
{
	if (notn >= n && n > 2)
		return (1);
	else if (n % notn == 0 || n <= 1)
		return (0);
	else
		return (checking(n, notn + 1));
}
