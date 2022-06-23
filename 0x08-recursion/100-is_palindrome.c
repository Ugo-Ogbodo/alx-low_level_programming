#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the array string being checked
 *
 * Return: 1 if true, 0 when false
 */

int is_palindrome(char *s)
{
	int len;

	len = string_len(s) - 1;

	return (recur(s, --len));
}

/**
 * string_len - checks the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

int string_len(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + string_len(++s));
}

/**
 * recur - recursive check
 * @s: the string
 * @l: length of the string
 *
 * Return:1 if ture, 0 for false
 */

int recur(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (recur(++s, l - 2));
	}
	else
		return (0);
}

