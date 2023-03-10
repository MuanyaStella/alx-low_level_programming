#include "main.h"
#include <string.h>

/**
 * _strcpy- copies the string pointed to by @src, including the terminating
 *	null byte (\0), to the buffer pointed to by @dest
 * @dest: the buffer
 * @src: sring to copy
 *
 * Return: pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
