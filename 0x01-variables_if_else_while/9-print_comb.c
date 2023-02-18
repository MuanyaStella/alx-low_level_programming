#include <stdio.h>

/**
 * main - print all possible combination of single digit
 * Return: 0 succeddfull
 */
int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
