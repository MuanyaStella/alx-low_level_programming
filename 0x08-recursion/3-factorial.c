#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: the factorial of n If n > 0.
 * - 1 to indicate an error If n < 0.
 *       */
int factorial(int n)
{
	int r = n;

	if (n < 0)
	return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	r *= factorial(n - 1);
	return (r);
}

