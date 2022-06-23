#include "main.h"

/**
 * factorial - Function prototype
 * Description: Computes the factorial of a number.
 * @n: The number to find the factorial of
 * Return: The factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
