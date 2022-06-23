#include "main.h"

/**
 * wildcmp - Function prototype
 * Description: Compares two strings
 * @s1: Pointer to the first string to compare
 * @s2: Pointer to the second string to compare
 * Return: 1 if the strings are considered identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));

		return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (*s1 == *s2 ? wildcmp(s1 + 1, s2 + 1) : 0);
}
