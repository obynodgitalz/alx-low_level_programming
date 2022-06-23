#include "main.h"

/**
 * _puts_recursion - Function prototype
 * Description : Prints a string
 * @s: Pointer to the string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
