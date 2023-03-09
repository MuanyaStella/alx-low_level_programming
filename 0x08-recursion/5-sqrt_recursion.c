#include "main.h"

int check_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * check_sqrt - checks to find the natural square root of an inputted number.
 * @num: The number.
 * @rt: The root to be tested.
 *
 * Return: sqare rot, if the number has a natural square root.
 * - 1, if the number does not have a natural square root.
 */
int check_sqrt(int num, int rt)
{
	if ((rt * rt) == num)
	return (rt);
	if (rt == num / 2)
		return (-1);
	return (check_sqrt(num, rt + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: the natural square root of n, if n has a natural square root..
 * - 1, if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (check_sqrt(n, root));
}
