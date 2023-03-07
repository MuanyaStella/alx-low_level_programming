#include "main.h"
#include <string.h>

/**
 * _memset - fills the memory with a constant byte.
 * @s: pointer to the memory to be filled.
 * @b: character to fill the memory with.
 * @n: number of bytes to be filled.
 *
 * Return: the filled memory @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
