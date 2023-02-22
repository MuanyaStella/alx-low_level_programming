#include "main.h"

/**
 *  _isalpha - function that checks for upper and lower case alphabets
 *
 *  @c: parameter checked
 *
 *  Return: i successful
 *  and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
