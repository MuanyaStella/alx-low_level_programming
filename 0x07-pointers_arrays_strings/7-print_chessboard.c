#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: Chessboard to be printed.
 */

void print_chessboard(char (*a)[8])
{
	int ix1, ix2;

	for (ix1 = 0; a[ix1][7]; ix1++)
	{
		for (ix2 = 0; ix2 < 8; ix2++)
			_putchar(a[ix1][ix2]);
		_putchar('\n');
	}
}
