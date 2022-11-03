#include "main.h"

/**
 * _strlength - The size of a string
 * @st: A pointer to the string
 * Return: String length
 */
int _strlength(char *st)
{
	if (!*st)
	{
		return (0);
	}
	return (1 + _strlength(++st));
}
/**
 * _pali - Checks palindrome
 * @s: A pointer to the string
 * @p: Position
 * Return: 1 on success, else 0
 */
int _pali(char *s, int p)
{
	if (p < 1)
	{
		return (1);
	}
	if (*s == *(s + 1))
	{
		return (_pali(s + 1, p - 2));
	}
	return (0);
}
/**
 * is_palindrome - Checksif a string is a palindrome
 * @s: A pointer to the strin
 * Return: 1 on success, else 0
 */
int is_palindrome(char *s)
{
	int length = _strlength(s);

	return (_pali(s, length - 1));
}
