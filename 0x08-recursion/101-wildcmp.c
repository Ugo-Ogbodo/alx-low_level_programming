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
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		else if (*s1 == '*' && *s2 == '\0')
			return (wildcmp(++s1, s2));
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
		{
			return (wildcmp(++s1, s2));
		}
		else
		{
			return (wildcmp(s1, check_card(s2, *(s1 + 1), 0, 0) + s2));
		}
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, ++s2));
		}
		else
		{
			return (wildcmp(s1 + check_card(s1, *(s2 + 1), 0, 0), s2));
		}
	}
	return (0);
}

/**
 * check_card - looks for the wild card
 * @s: string, may contain wild card
 * @c: string
 * @i: int
 * @j: int
 *
 * Return: the string or integers
 */

int check_card(char *s, char c, int i, int j)
{
	if (*(s + i) == '\0')
		return (j + 1);
	else if  (*(s + i) == c || *(s + i) == '*')
		j = i;

	return (check_card(s, c, i + 1, j));
}

