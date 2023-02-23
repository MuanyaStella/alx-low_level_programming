#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0 successful
 */

void jack_bauer(void)
{
	int k;
	int l;

	for (k = 0 ; k < 24 ; k++)
	{
		for (l = 0 ; l < 60 ; l++)
		{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(':');
			_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
			_putchar('\n');
		}
	}
}
