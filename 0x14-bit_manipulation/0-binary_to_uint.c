#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: 0 - if b is NULL or contains chars not 0 or 1
 * Otherwise - return the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int count;

	if (b == '\0')
		return (0);
	for (count = 0; b[count];)
		count++;
	for (count -= 1; count >= 0; count--)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		num += (b[count] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
