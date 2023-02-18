#include <stdio.h>

/**
 * main - print numbers of base 10 starting from 0
 * Return: 0 syccessful
 */
int main(void)
{
	int l;

	for (l = 0; l < 10; l++)
		putchar(l + '0');
	putchar('\n');
	return (0);
}
