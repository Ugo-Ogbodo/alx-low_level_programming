#include "main.h"

/**
 * wildcmp - compares two strings with wildcard expansions
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	return (test(s1, s2, 0, 0, -1));
}

/**
 * last_char - check the last char of s2
 * @s: string
 * @c: int
 *
 * Return: 0 if false, 1 if true
 */

int last_char(char *s, int c)
{
	if (s[c] == '*')
		return (last_char(s, c + 1));
	else if (s[c] == '\0')
		return (1);

	return (0);
}

/**
 * test - assist in checking wild cards
 * @s1: the first string
 * @s2: the second string
 * @i: int
 * @j: int
 * @l: int
 *
 * Return: 0
 */

int test(char *s1, char *s2, int i, int j, int l)
{
	if (s1[i] != '\0')
	{
		if (s2[j] == '\0')
			return (0);
		else if (s2[j] == '*')
		{
			if (s2[j + 1] == '*')
				return (test(s1, s2, i, j + 1, j));
			else if (s2[j + 1] == s1[i])
				return (test(s1, s2, i, j + 1, j));
			else if (s1[i + 1] != s2[j + 1])
				return (test(s1, s2, i + 1, j, j));
			else if (s1[i + 1] == s2[j + 1])
				return (test(s1, s2, i + 1, j + 1, j));
		}
		else if ((s1[i] == s2[j]) || (s2[j] == '*' && s2[j + 1] == s1[i + 1]))
			return (test(s1, s2, i + 1, j + 1, l));

		if (l == -1)
			return (0);
		return (test(s1, s2, i, l, l));
	}
	if (s2[j] != '\0')
		return (last_char(s2, j));

	return (1);
}
