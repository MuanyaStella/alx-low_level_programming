#include "main.h"
/**
 * print_alphabet_x10 - function that prints alphabets 10x
 * Return: 0 successful
 */

void print_alphabet_x10(void)
{
	int k;
	char l;

	for (k = 1 ; k <= 10 ; k++)
	{
		for (l = 'a' ; l <= 'z' ; l++)
			_putchar(l);
		_putchar('\n');
	}
}
