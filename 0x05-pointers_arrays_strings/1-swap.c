#include "main.h"

/**
 * swap_int - function swaps values of two integers
 *
 * @a: first integer
 * @b: second interger
 *
 * Return: 0 successful
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
