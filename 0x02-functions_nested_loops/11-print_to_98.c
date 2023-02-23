#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function to print natural numbers
 *
 * @n: parameter checked
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	int y;

	if (n >= 0 && n <= 98)
	{
		for (y = n ; y <= 98 ; y++)
		{
			printf("%d", y);
			if (y != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (y = n ; y <= 98 ; y++)
		{
			printf("%d", y);
			if (y != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (y = n ; y >= 98 ; y--)
		{
			printf("%d", y);
			if (y != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);
}
