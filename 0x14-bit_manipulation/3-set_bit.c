#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @index: the index, starting from 0 of the bit you want to set
 * @n: pointer to the bit.
 * Return: 1 - if successful
 * -1 if an error occured.
 */

 int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
