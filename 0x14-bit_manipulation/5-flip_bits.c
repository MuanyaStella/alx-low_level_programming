#include "main.h"

/**
 * flip_bits - gives the number of bits you would need to
 * flip to get from one number to another.
 * @m: the number to flip n to
 * @n: the number
 *
 * Return: The number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
{
	unsigned long int nbits;

	for (nbits = 0; || m; n >>= 1, m >>=1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}
	return (nbits);
}
