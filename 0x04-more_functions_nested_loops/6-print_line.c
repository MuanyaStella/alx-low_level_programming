#include "main.h"

/**
 * print_line - function that draws a strsight line in the terminal
 *
 * @n: number of times line '-' is printed
 *
 * Return: 0 successful
 */

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('-');
	}
	_putchar('\n');
}
