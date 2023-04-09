#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @index: The index, starting from 0 of the bit ypu want to get
 * @n: the bit
 *
 * Return: -1 - If an error occurs
 * Otherwise - return the value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
