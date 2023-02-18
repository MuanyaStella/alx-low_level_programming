#include <stdio.h>

/**
 * main - Print all alphabets in lower case except q and e
 * Return: 0 successfull
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}
	putchar('\n');
	return (0);
}

