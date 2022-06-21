#include "main.h"

/**
 * _strstr - Function prototype
 * Description: Locates a substring in a string
 * @haystack: The string to search in
 * @needle: The string to search for
 * Return: A pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		int x;

		for (x = i; haystack[x] > '\0' && needle[x - i] > '\0'; x++)
		{
			if (haystack[x] != needle[x - i])
				break;
		}

		if (needle[x - i] == '\0')
			return (haystack + i);
	}

	return (0);
}
