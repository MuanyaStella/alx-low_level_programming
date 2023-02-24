#include "main.h"

/**
 * print_diagonal - function draws diagonal line on the terminal
 *
 * @n: number of times diagonal '\' is drawn
 *
 * Return: 0 succesful
 */

void print_diagonal(int n)
{
	int d, x;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (x = 0; x < d; x++)
				_putchar(' ');
			_putchar('\\');
			if (d == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
