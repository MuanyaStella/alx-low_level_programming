#include "main.h"

/**
 * _strncat - function concatenates two strings
 * @dest: first string, destination
 * @src: second string, source
 * @n: number of character to append
 * Return: concatenated string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		;
	for (j = 0; j <= n - 1; j++)
	{
		dest[destlen + i] = src[j];
		i++;
	}
	return (dest);
}
