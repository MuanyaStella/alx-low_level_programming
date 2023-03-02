#include "main.h"
#include <string.h>

/**
 *  _strcmp - compares two sytrings
 *  @s1: pointer to fist string
 *  @s2: pointer to second string
 *
 * Return: if s1 = s2, return 0
 * if s1 < s2, return negative
 * if s1 > s2, return positive
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] !=  s2[x])
		{
			if (s1[x] < s2[x])
				return (s1[x] - s2[x]);
			else if (s1[x] > s2[x])
				return (s1[x] - s2[x]);
		}
		else
			return (0);
	}
	return (0);
}
