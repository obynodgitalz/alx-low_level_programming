#include "main.h"
#include <string.h>

/**
 * _is_palindrome - Function prototype
 * Description: Computes if a string is a palindrome
 * @s: Pointer to the string to check
 * @x: The length of the string
 * Return: - 1 is a prime number - 0 is not a prime
 */
int _is_palindrome(char *s, int x)
{
	if (x < 1)
		return (1);

	return (*s == *(s + x) ? _is_palindrome(s + 1, x - 2) : 0);
}

/**
 * is_palindrome - Function prototype
 * Description: Checks if a string is a palindrome
 * @s: Pointer to the string to check
 * Return: - 1 is a prime number - 0 is not a prime
 */
int is_palindrome(char *s)
{
	int x = strlen(s) -1;

	return (_is_palindrome(s, x));
}
