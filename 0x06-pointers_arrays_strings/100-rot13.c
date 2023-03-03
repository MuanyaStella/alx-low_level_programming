#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string
 *
 * Return: s
 */

char *rot13(char *s)
{
	int x, y;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13alpha[] = "NOPQRSTUVWZYZABCDEFGHIJKLMnopqrstuvwxyzabcdrfghijklm";

	for (x = 0; s[x] != '\n'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == alpha[y])
			{
				s[x] = rot13alpha[y];
				break;
			}
		}
	}
	return (s);
}
