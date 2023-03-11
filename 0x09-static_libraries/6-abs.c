#include "main.h"
/**
 * _abs - checks for the absolute value of an integer
 *
 * @a: parameter checked for
 *
 * Return: a is successful
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
