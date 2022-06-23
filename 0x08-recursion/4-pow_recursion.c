#include "main.h"

/**
 * _pow_recursion - Function prototype
 * Description: Computes the value of x raised to the power of y.
 * @x: The base
 * @y: The power to which the number is raised
 * Return: The value of x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
