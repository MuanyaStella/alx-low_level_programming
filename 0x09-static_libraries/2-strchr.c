#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates the character of a string.
 * @s: the string.
 * @c: character to be located.
 *
 * Return: pointer to the fisrt occurence if c is found.
 * Null, if c is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
