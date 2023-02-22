#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @k: parameter checked
 *
 * Return: l successful
 */

int print_last_digit(int k)
{
	int l;

	l = k % 10;
	if (k < 0)
		l = -l;
	_putchar(k + '0');
	return (l);
}
