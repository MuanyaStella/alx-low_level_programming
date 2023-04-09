#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 - if big-endian
 * 1 - If little-endian
 */

int get_endianness(void)
{
	int num = 1;
	char *en = (char *)&num;

	if (*en == 1)
		return (1);
	return (0);
}
