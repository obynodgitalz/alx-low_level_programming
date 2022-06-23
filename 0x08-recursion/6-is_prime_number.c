#include "main.h"

/**
 * is_prime_number - Function prototype
 * Description: Checks if a number is prime or not.
 * @n: The number to check
 * Return: - 1 is a prime number - 0 is not a prime
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}

/**
 * _is_prime - Function prototype
 * Description: Computes if a number is a prime or not
 * @n: The number to be checked
 * @x: The number to be checked if it's a factor of n
 * Return: - 1 is a prime number - 0 is not a prime
 */
int _is_prime(int n, int x)
{
	if (x >= n && n > 1)
		return (1);

	if (n % x == 0 || n <= 1)
		return (0);

	return (_is_prime(n, x + 1));
}
