#include "main.h"

/**
 * reverse_array  - reverse content of an array of integers
 * @a: the array of integers
 * @n: the number of elements in array
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = n - 1; x >= n / 2; x--)
	{
		y = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = y;
	}
}
