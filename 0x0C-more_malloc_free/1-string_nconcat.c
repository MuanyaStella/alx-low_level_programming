#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: NULL - if the function fails
 * Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = n, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (y = 0; s1[y]; y++)
		x++;
	s = malloc(sizeof(char) * (x + 1));
	if (s == NULL)
		return (NULL);
	x = 0;
	for (y = 0; s1[y]; y++)
		s[x++] = s1[y];
	for (y = 0; s2[y] && y < n; y++)
		s[x++] = s2[y];
	s[x] = '\0';
	return (s);
}
