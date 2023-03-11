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
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
