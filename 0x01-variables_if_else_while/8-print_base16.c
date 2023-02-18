#include <stdio.h>

/**
 * main - prints numbers of base 16
 * Return: 0 successful
 */
int main(void)
{
	int num;
	char x;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}

