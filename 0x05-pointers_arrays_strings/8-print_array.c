#include "main.h"

/**
 * print_array - prints number of elements of an array of intrgers
 *
 * @a: array of integers
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(". ");
	}
	printf("\n");
}
