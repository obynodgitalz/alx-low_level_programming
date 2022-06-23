#include "main.h"

/**
 * _sqrt_recursion - Function prototype
 * Description: Gets the natural square root of a number
 * @n: The number to find the square root of
 * Return: The square root of the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *  _sqrt - Function prototype
 * Description: Computes the natural square root of a number
 * @n: The number to find the square root of
 * @x: The number to check if it's a square root of n
 * Return: The square root of a number.
 */
int _sqrt(int n, int x)
{
	if (n < 0)
		return (-1);

	if ((x * x) > n)
		return (-1);

	return (x * x == n ? x : _sqrt(n, x + 1));
}
