#include "main.h"

/**
 * _strncat - function concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of character to append
 * Return: concatenated string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
