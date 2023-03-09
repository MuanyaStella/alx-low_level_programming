#include "main.h"

int _strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * _strlen - Returns the length of a string.
 * @s: sting to be measure.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += _strlen(s + l);
	}
	return (l);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: the string.
 * @l: length of string @s.
 * @i: items of the string to be checked.
 *
 * Return: - 1, if the string is a palindrome
 * - 0, if the string is not a palindrome
 */
int check_palindrome(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);
	if (s[i] == s[l - i - 1])
		return (check_palindrome(s, l, i + 1));
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string.
 *
 * Return: 1, If the string is a palindrome.
 * 0, if the string is not a palindrome.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = _strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, l, i));
}
