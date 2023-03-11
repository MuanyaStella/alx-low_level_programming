#include "main.h"


/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to locate.
 *
 * Return: a pointer to the beginning of the located substring,
 * if the substring is located.
 * NULL, If the substring is not located.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
