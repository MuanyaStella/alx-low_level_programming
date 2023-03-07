#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination where memor is copied t.o
 * @src: source where memory is copied from.
 * @n: number of bytes to copy
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[j];
		n--;
	}
	return (dest);
}
