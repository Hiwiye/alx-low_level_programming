#include "main.h"

/**
 * _is_prime - helps to determine if a number is a prime
 * @n: the number to be checked
 * @i: the current divisor being tested
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int _is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_is_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *                   otherwise return 0
 * @n: the number to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}

