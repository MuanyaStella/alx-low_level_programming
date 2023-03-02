#include "main.h"

/**
 * string_toupper - changes all lowercase of a string to uppercae
 * @s: the string
 *
 * Return: changed string
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;
		x++;
	}
	return (s);
}

