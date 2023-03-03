#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 */

void print_number(int n)
{
	unsigned int y = n;

	if (n < 0)
	{
		_putchar('-');
		y = -y;
	}
	if ((y / 10) > 0)
		print_number(y / 10);
	_putchar((y % 10) + '0');
}
