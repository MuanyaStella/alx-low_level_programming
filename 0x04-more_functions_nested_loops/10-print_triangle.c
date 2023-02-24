#include "main.h"

/**
 * print_triangle - pribts a triangle
 *
 * @size: size of triangle
 *
 * Return: 0 successful
 */

void print_triangle(int size)
{

	int l;
	int t;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (t = size - l; t > 0; t--)
				_putchar(' ');
			for (t = 0; t < l; t++)
				_putchar('#');
			if (l == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
