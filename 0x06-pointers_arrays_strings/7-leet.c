#include "main.h"

/**
 * leet - encodes a string to 1337
 * @ch: the string
 *
 * Return: to ch
 */

char *leet(char *ch)
{
	int x, y;

	char chk[] = "aAeEoOtTlL";
	char chg[] = "4433007711";

	for (x = 0; ch[x] != '\0'; x++)
	{
		for (y = 0; chk[y] != '\0'; y++)
		{
			if (ch[x] == chk[y])
				ch[x] = chg[y];
		}
	}
	return (ch);
}
